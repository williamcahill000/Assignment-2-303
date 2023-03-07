#pragma once
#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

class linkedList {

private:
	node* head;
	node* tail;
	size_t nodeCount;
public:
	linkedList();
	void push_front(int newData);
	void push_back(int newData);
	void pop_front();
	void pop_back();
	void insert(int pos, int newData, node** head);
	bool boolRemove(int pos, node** head);
	size_t find(int value, node* head);
};