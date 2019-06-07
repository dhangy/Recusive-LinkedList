#pragma once

struct Node
{
	Node();
	Node(int data);
	~Node();

	Node *next;
	int data;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void Insert(int newData);
	void Remove(int toBeRemoved);
	void PrintList();
	int Size();


private:

	Node *head;
	Node *InsertHelper(Node *cursor, int newData);
	void PrintListHelper(Node *cursor);
	int SizeHelper(Node *cursor);
	void DestructorHelper(Node *cursor);
	Node *RemoveHelper(Node *cursor, int toBeDeleted);
};

