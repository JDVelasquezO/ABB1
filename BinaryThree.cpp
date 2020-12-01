//
// Created by jdvelasquezo on 29/11/20.
//
#include <iostream>
#include "BinaryThree.h"

using namespace std;

BinaryThree::BinaryThree() {
    this->root = nullptr;
}

void BinaryThree::insert(int value) {
    try {
        root = insert(root, value);

    } catch (const char *e) {
        cout << e << endl;
    }
}

Node* BinaryThree::insert(Node *aux, int value) {

    if (aux == nullptr) {
        aux = new Node(value);
        aux->setRight(nullptr);
        aux->setLeft(nullptr);
    } else if (value < aux->getValue()) {
        Node* left = insert(aux->getLeft(), value);
        aux->setLeft(left);
    } else if (value > aux->getValue()) {
        Node* right = insert(aux->getRight(), value);
        aux->setRight(right);
    } else {
        throw "Node duplicated";
    }

    return aux;
}

void BinaryThree::show() {
    showInOrder(root);
}

void BinaryThree::showInOrder(Node *aux) {
    if (aux != nullptr) {
        showInOrder(aux->getLeft());
        cout << aux->getValue() << " " ;
        showInOrder(aux->getRight());
    }
}

Node* BinaryThree::search(int value) {
    return search(root, value);
}

Node* BinaryThree::search(Node *aux, int value) {
    if (aux == nullptr) {
        throw "Node not founded";
    } else if (value == aux->getValue()) {
        return aux;
    } else if (value < aux->getValue()) {
        return search(aux->getLeft(), value);
    } else {
        return search(aux->getRight(), value);
    }
}
