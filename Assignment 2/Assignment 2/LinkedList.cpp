#pragma once
#include "LinkedList.h"

//Creates an empty linked list
linkedList::linkedList() {
	this->head = nullptr;
	this->tail = nullptr;
	this->nodeCount = 0;
}

//pushes new node to the front of a linked list (header)
void linkedList::push_front(int newData) {
	node* newNode = new node;
	newNode->data = newData;
	newNode->next = head;
	head = newNode;
} 

//Pushes new node to the back of a linked list (tail)
void linkedList::push_back(int newData) {
	node* newNode = new node;
	newNode->data = newData;
	node* temp = head;

	if (head == nullptr) {
		head = newNode;
		return;
	}

	while (temp->next != nullptr)
		temp = temp->next;

	temp->next = newNode;
	tail = newNode;
}

//pops the header node
void linkedList::pop_front() {
	if (head) {
		node* temp = head;
		head = head->next;
		delete temp;
	}
	return;
}

//pops the tail node
void linkedList::pop_back() {
	if (head == nullptr) {
		return;
	}
	if (head->next = nullptr) {
		delete head;
		return;
	}

	node* second_last = head;
	while (second_last->next->next != nullptr)
		second_last = second_last->next;

	delete (second_last->next);
	second_last->next = nullptr;
	return;
}

//inserts new node at a certain position
void linkedList::insert(int pos, int newData, node** head) {
	node* newNode = new node;
	newNode->data = newData;
	newNode->next = nullptr;

	if (pos < 1 || pos > this->nodeCount + 1)
		cout << "Invalid\n";
	else if (pos == 1) {
		newNode->next = *head;
		*head = newNode;
		this->nodeCount++;
	}
	else {
		node* temp = *head;
		while (--pos > 1) {
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		this->nodeCount++;
	}
}

//deletes node at given position
bool linkedList::boolRemove(int pos, node** head) {
	if (*head == nullptr)
		return;
	node* temp = *head;
	if (pos == 0) {
		*head = temp->next;
		free(temp);
		return;
	}
	for (int i = 0; temp != nullptr && i < pos - 1; i++)
		temp = temp->next;
	if (temp == nullptr || temp->next == nullptr)
		return;
	node* next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return true;
}

//finds first occurence of value and returns, otherwise prints the size of the linked list
size_t linkedList::find(int value, node* head) {
	int temp = 0;
	node* current = head;
	while (current != nullptr) {
		if (current->data == value)
			return true;
		else
			temp++;
	}
	return temp;
}