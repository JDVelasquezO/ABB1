//
// Created by jdvelasquezo on 29/11/20.
//
#include <iostream>
#include "BinaryThree.h"

using namespace std;

BinaryThree::BinaryThree() {
    root = nullptr;
}

void BinaryThree::insert(int value) {
    try {
        root = insert(root, value);
    } catch (const char *e) {
        cout << e << endl;
    }
}

void BinaryThree::show() {
    showInOrder(root);
}

void BinaryThree::showInOrder(Node &aux) {
    if (aux != nullptr) {
        showInOrder(aux->left);
        cout << aux->value << " ";
        showInOrder(aux->right);
    }
}

Node BinaryThree::insert(Node &aux, int value) {
    if (aux == nullptr) {
        aux = new node;
        aux->value = value;
        aux->right = nullptr;
        aux->left = nullptr;
    } else if (value < aux->value) {
        Node left = insert(aux->left, value);
        aux->left = left;
    } else if (value > aux->value) {
        Node right = insert(aux->right, value);
        aux->right = right;
    } else {
        throw "Node duplicated";
    }

    return aux;
}

Node BinaryThree::search(int value) {
    return search(root, value);
}

Node BinaryThree::search(Node &aux, int value) {
    if (aux == nullptr) {
        throw "Node not founded";
    } else if (value == aux->value) {
        return aux;
    } else if (value < aux->value) {
        return search(aux->left, value);
    } else {
        return search(aux->right, value);
    }
}
