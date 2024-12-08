#pragma once
#include "Node.h"
#include <sstream>


class List
{
private:
	void printListHelper(Node* hPtr);
	Node* headPtr;
public:
	List();
	void insert(Data* ptr);
	Data* remove();
	void printList();
	Data* GetDataAtTime(int time);
	void LoadList(std::stringstream &inputStream);
};

