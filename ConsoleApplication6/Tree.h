#pragma once
class Tree
{
	class Node
	{
	public:
		int value;
		Node* right;
		Node* left;
		Node(int value);
		Node(int value, Node* right, Node* left);
	};
	Node* _root;
	void insert(int value, Node* node);
public:
	Tree();
	void insert(int value);
	void print();
};

