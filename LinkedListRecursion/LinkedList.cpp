#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>
 
using namespace std;

LinkedList::LinkedList()
{ 
	head = nullptr;
}


LinkedList::~LinkedList()
{
	cout << "Linked List Destructor Called" << endl;
	DestructorHelper(head);
	head = nullptr; 
}

void LinkedList::DestructorHelper(Node *cursor) {
	//base case cause recursion
	if (cursor == nullptr) {
		return;
	}
	else {
		DestructorHelper(cursor->next);
		delete cursor;

	}
}
void LinkedList::Insert(int newData) {
	head = InsertHelper(head, newData);
}

Node * LinkedList::InsertHelper(Node *cursor, int newData) {
	
	if (cursor == nullptr) {
		return new Node(newData);
	}
	else if (newData > cursor->data) {
		cursor->next = InsertHelper(cursor->next, newData);
		return cursor;
	}
	else {
		Node *temp = new Node(newData);
		temp->next = cursor;
		return temp;
	}
}

void LinkedList::PrintList() {

}

void LinkedList::PrintListHelper(Node *cursor) {
	//base case cause recursion
	if (cursor == nullptr) {
		return;
	}
	else {
		
		cout << cursor->data << ",";
		PrintListHelper(cursor->next);
	}

}

int LinkedList::Size() {
	
	return SizeHelper(head);
}

int LinkedList::SizeHelper(Node *cursor) {
	//base case 
	if (cursor == nullptr) {
		return 0;
	}
	else {
		return 1 + SizeHelper(cursor->next);
	}
}

void LinkedList::Remove(int toBeRemoved) {
	head = RemoveHelper(head, toBeRemoved);
}

Node * LinkedList::RemoveHelper(Node *cursor, int toBeDeleted) {
	if (cursor == nullptr) {
		return cursor;
	}
	if (cursor->data == toBeDeleted) {
		//found the node thats needs to be removed

		Node *tempPtr = nullptr;

}




Node::Node() {
	next = nullptr;
	data = 0x000000;
}

Node::Node(int data) {

	next = nullptr;
	this->data = data;

}

Node::~Node() {
	cout << "Deleting Node with value" << this->data << endl;
}