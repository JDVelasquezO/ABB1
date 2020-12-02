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

void BinaryThree::remove(int value) {
    root = remove(root, value);
}

Node* BinaryThree::changeNode(Node *aux) {
    Node* node = aux;
    Node* gLeft = aux->getLeft();

    while (gLeft->getRight() != nullptr) {
        node = gLeft;
        gLeft = gLeft->getRight();
    }

    aux->setValue(gLeft->getValue());

    if (node == aux) {
        node->setLeft(gLeft->getLeft());
    } else {
        node->setRight(gLeft->getRight());
    }

    return gLeft;
}

Node* BinaryThree::remove(Node *aux, int value) {
    if (aux == nullptr) {
        throw "Node not founded";
    } else if (value < aux->getValue()) {
        Node* left = remove(aux->getLeft(), value);
        aux->setLeft(left);
    } else if (value > aux->getValue()) {
        Node* right = remove(aux->getRight(), value);
        aux->setRight(right);
    } else {
        Node* node = aux;
        if (node->getRight() == nullptr) {
            aux = node->getLeft();
        } else if (node->getLeft() == nullptr) {
            aux = node->getRight();
        } else {
            node = changeNode(node);
        }

        node = nullptr;
    }

    return aux;
}

bool BinaryThree::isLeaf(int value) {
    Node* node = search(value);

    if (node->getRight() == nullptr && node->getLeft() == nullptr) {
        return true;
    }

    return false;
}
