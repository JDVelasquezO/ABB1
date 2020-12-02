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
    Node* search(Node *node, int value);
    Node* remove(Node *node, int value);
    Node* changeNode(Node *node);

public:
    BinaryThree();
    void insert(int value);
    void show();
    Node* search(int value);
    void remove(int value);
};

#endif //ABB1_BINARYTHREE_H
