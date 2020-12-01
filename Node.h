//
// Created by jdvelasquezo on 1/12/20.
//

#ifndef ABB1_NODE_H
#define ABB1_NODE_H


class Node {

    int value;
    Node *left, *right;

public:
    int getValue() const;

    void setValue(int value);

    Node *getLeft() const;

    void setLeft(Node *left);

    Node *getRight() const;

    void setRight(Node *right);

public:
    Node(int value, Node *left = nullptr, Node *right = nullptr);
};


#endif //ABB1_NODE_H
