#include "stdafx.h"
#include "Tree.h"

int difference(Tree::Node* now)
{
	int left = -1;
	int right = -1;
	if (now->left != NULL)
		left = now->left->height;
	if (now->right != NULL)
		right = now->right->height;
	return left - right;
}

void Tree::recursion_add_node(Node *&now, int data)
{
	if (now == NULL)
	{
		now = new Node();
		now->data = data;
		now->left = NULL;
		now->right = NULL;
		now->height = 0;
	}
	else
	{
		if (now->data > data)
			recursion_add_node(now->left, data);
		else
			recursion_add_node(now->right, data);
	};
}
void Tree::recursion_height(Node *now)
{
	if (now != NULL)
	{
		int left = -1;
		int right = -1;
		if (now->left != NULL)
		{
			recursion_height(now->left);
			left = now->left->height;
		};
		if (now->right != NULL)
		{
			recursion_height(now->right);
			right = now->right->height;
		};
		if (left > right)
			now->height = left + 1;
		else
			now->height = right + 1;
	}

}

Tree::Node* Tree::rotate_right(Node *p)
{
	Node* q = p->left;
	if (p == head)
		head = q;
	p->left = q->right;
	q->right = p;
	return q;
}

Tree::Node* Tree::rotate_left(Node *q)
{
	Node* p = q->right;
	if (q == head)
		head = p;
	q->right = p->left;
	p->left = q;
	return p;
}
void Tree::recursion_sort(Node *now, Node *parent, bool isright)
{
	if (now != NULL)
	{
		recursion_height(head);

		Node* newnode = now;
		int dif = difference(now);
		if (dif > 1)
		{
			newnode = rotate_right(now);
		};
		if (dif < -1)
		{
			newnode = rotate_left(now);
		};

		if (parent != NULL)
		{
			if (isright)
				parent->right = newnode;
			else
				parent->left = newnode;
		};
		if (now == head)
			head = newnode;
		recursion_sort(newnode->left, newnode, false);
		recursion_sort(newnode->right, newnode, true);
	}
}

Tree::Node* Tree::recursion_search(int data, Node *now)
{
	if (now == NULL)
		return NULL;
	if (now->data == data)
		return now;
	else
	{
		Node* res = NULL;
		res = recursion_search(data, now->left);
		if (res != NULL)
			return res;
		res = recursion_search(data, now->right);
		return res;
	};
}



void Tree::search(int data)
{
	Node* res = NULL;
	res = recursion_search(data, head);
	selected = res;
}
void Tree::height()
{
	recursion_height(head);
}
void Tree::add(int data)
{
	recursion_add_node(head, data);
	recursion_height(head);
}
void Tree::sort()
{
	recursion_sort(head,NULL,true);
}