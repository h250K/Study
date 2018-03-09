#pragma once
#include <iostream>

class Tree
{
public:
	struct Node
	{
		int data;
		Node *left;
		Node *right;
		unsigned int height;
	};

	Node *head = NULL;
	Node *selected = NULL;

	void add(int data);
	void height();
	void sort();
	void search(int data);
	Node* recursion_search(int data, Node *now);
private:
	void recursion_add_node(Node *&now, int data);
	void recursion_height(Node *now);
	void recursion_sort(Node *now, Node *parent, bool isright);

	Node* rotate_right(Node *p);
	Node* rotate_left(Node *q);
};

