#pragma once
#include "Header.h"

class Node {
private:
	int number;
	Node* nextNode;
public:
	Node() {
		number = 0;
		nextNode = nullptr;
	}

	Node(int n) {
		number = n;
		nextNode = nullptr; 
	}

	void setNext(Node* next) {
		nextNode = next; 
	}

	Node* getNext() {
		return nextNode;
	}

	int getNumber() {
		return number; 
	}
};