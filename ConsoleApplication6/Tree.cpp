#include "Tree.h"

Tree::Node::Node(int value)
    : Node(value, nullptr, nullptr) {}

Tree::Node::Node(int value, Node* right, Node* left)
    : value(value), right(right), left(left) {}

Tree::Tree()
    : _root(nullptr) {}

void Tree::insert(int value) {
    insert(value, _root);
}

void Tree::insert(int value, Node*& node) {
    if (node == nullptr) {
        node = new Node(value);
    }
    else if (value > node->value) {
        insert(value, node->right);
    }
    else {
        insert(value, node->left);
    }
}

void Tree::print() const {
    print(_root);
    std::cout << std::endl;
}

void Tree::print(Node* node) const {
    if (node == nullptr) {
        return;
    }

    print(node->left);
    std::cout << node->value << " ";
    print(node->right);
}
