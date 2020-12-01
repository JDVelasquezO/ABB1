//
// Created by jdvelasquezo on 1/12/20.
//

#include "Node.h"

Node::Node(int value, Node *left, Node *right) {
    this->setValue(value);
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getLeft() const {
    return left;
}

void Node::setLeft(Node *left) {
    Node::left = left;
}

Node *Node::getRight() const {
    return right;
}

void Node::setRight(Node *right) {
    Node::right = right;
}
