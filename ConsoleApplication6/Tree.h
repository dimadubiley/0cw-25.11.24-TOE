#pragma once
#include <iostream>

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

    void insert(int value, Node*& node);

    void print(Node* node) const;

public:
    Tree();
    void insert(int value);
    void print() const;
};