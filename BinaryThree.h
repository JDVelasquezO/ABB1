//
// Created by jdvelasquezo on 29/11/20.
//
#include "Node.h"

#ifndef ABB1_BINARYTHREE_H
#define ABB1_BINARYTHREE_H

class BinaryThree {

    Node *root;
    Node* insert(Node *node, int value);
    void showInOrder(Node *node);

public:
    BinaryThree();
    void insert(int value);
    void show();

    Node* search(int value);
    Node* search(Node *node, int value);
};

#endif //ABB1_BINARYTHREE_H
