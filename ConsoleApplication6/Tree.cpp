#include "Tree.h"

void Tree::insert(int value, Node* node)
{
	Node* newNode = new Node(value);
	if (_root == nullptr)
	{
		_root = newNode;
		return;
	}
}

Tree::Tree()
	: _root(nullptr)
{}

void Tree::insert(int value, Node* node)
{
	if (node == nullptr)
	{
		Node* newNode = new Node(value);
		node = newNode;
		return;
	}
	if (value > node-> value)
	{
		insert(value, node->right);
	}
	else
	{
		insert(value, node->left);
	}
}

void Tree::print()
{
}

Tree::Node::Node(int value)
	: Node(value, nullptr, nullptr)
{}

Tree::Node::Node(int value, Node* right, Node* left)
	:value(value),
	left(left),
	right(right)
{}
