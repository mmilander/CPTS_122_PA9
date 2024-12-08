// Fill out your copyright notice in the Description page of Project Settings.

#include "RocketActor.h"
#include <sstream>


// Sets default values
ARocketActor::ARocketActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ARocketActor::SpawnRocket()
{
	FVector SpawnLocation(0.0f, 0.0f, 0.0f);
	FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	GetWorld()->SpawnActor<ARocketActor>(SpawnLocation, SpawnRotation, SpawnInfo);
	//GetWorld()->SpawnActor<ARocketActor>(FVector::ZeroVector, FRotator::ZeroRotator);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ROCKET HAS BEEN SPAWNED"));
	}

	UE_LOG(LogTemp, Warning, TEXT("TEST"));



}

void ARocketActor::UpdateSimTime(float DeltaTime)
{
	SimTime = SimTime + (DeltaTime * SpeedMultiplier);
}

void ARocketActor::startSim() {

	startFlag = true;
}


void ARocketActor::SetSimTime(float Time)
{
	SimTime = Time;
}

// Called when the game starts or when spawned
void ARocketActor::BeginPlay()
{
	Super::BeginPlay();

	//SpawnRocket();

	FString inputString;

	FString FilePath = FPaths::ProjectContentDir() + TEXT("2023-04-16FULL.csv");


	FFileHelper::LoadFileToString(inputString, *FilePath);
	std::string str = std::string(TCHAR_TO_UTF8(*inputString));

	std::stringstream  inputStream(str);



	SimTime = 0;
	FlightData.LoadList(inputStream);
}

// Called every frame
void ARocketActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Data* curData = nullptr;
	
	SimTime += DeltaTime;

	//this is a test

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(DeltaTime));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt(SimTime));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt((int)(SimTime * 100)));

	

	curData = FlightData.GetDataAtTime((int)(SimTime * 100));

	if (curData != nullptr)
	{
		FRotator newRotation = FRotator(curData->getPitch(), curData->getRoll(), curData->getYaw());

		this->SetActorRotation(newRotation);
	}


	//FVector NewLocation = this->GetActorLocation();
	//NewLocation += FVector(0.0f, 0.0f, 0.1f);
	//this->SetActorLocation(NewLocation);


}

