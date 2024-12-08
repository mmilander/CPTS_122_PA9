// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPTS_122_PA9/RocketActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketActor() {}

// Begin Cross Module References
CPTS_122_PA9_API UClass* Z_Construct_UClass_ARocketActor();
CPTS_122_PA9_API UClass* Z_Construct_UClass_ARocketActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CPTS_122_PA9();
// End Cross Module References

// Begin Class ARocketActor Function SpawnRocket
struct Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SPAWNING" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocketActor, nullptr, "SpawnRocket", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARocketActor_SpawnRocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocketActor::execSpawnRocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnRocket();
	P_NATIVE_END;
}
// End Class ARocketActor Function SpawnRocket

// Begin Class ARocketActor
void ARocketActor::StaticRegisterNativesARocketActor()
{
	UClass* Class = ARocketActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnRocket", &ARocketActor::execSpawnRocket },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARocketActor);
UClass* Z_Construct_UClass_ARocketActor_NoRegister()
{
	return ARocketActor::StaticClass();
}
struct Z_Construct_UClass_ARocketActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RocketActor.h" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARocketActor_SpawnRocket, "SpawnRocket" }, // 254668992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocketActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARocketActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPTS_122_PA9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARocketActor_Statics::ClassParams = {
	&ARocketActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARocketActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARocketActor()
{
	if (!Z_Registration_Info_UClass_ARocketActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARocketActor.OuterSingleton, Z_Construct_UClass_ARocketActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARocketActor.OuterSingleton;
}
template<> CPTS_122_PA9_API UClass* StaticClass<ARocketActor>()
{
	return ARocketActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARocketActor);
ARocketActor::~ARocketActor() {}
// End Class ARocketActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_charl_OneDrive___Washington_State_University__email_wsu_edu__2024_2025_School_Year_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARocketActor, ARocketActor::StaticClass, TEXT("ARocketActor"), &Z_Registration_Info_UClass_ARocketActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARocketActor), 4032357527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charl_OneDrive___Washington_State_University__email_wsu_edu__2024_2025_School_Year_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_1679402501(TEXT("/Script/CPTS_122_PA9"),
	Z_CompiledInDeferFile_FID_Users_charl_OneDrive___Washington_State_University__email_wsu_edu__2024_2025_School_Year_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charl_OneDrive___Washington_State_University__email_wsu_edu__2024_2025_School_Year_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
