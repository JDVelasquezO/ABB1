//
// Created by jdvelasquezo on 29/11/20.
//

#ifndef ABB1_BINARYTHREE_H
#define ABB1_BINARYTHREE_H

struct node {
    int value;
    node *left, *right;
};
typedef struct node *Node;

class BinaryThree {

private:
    Node root;
    Node insert(Node &node, int value);
    void showInOrder(Node &node);

public:
    BinaryThree();
    void insert(int value);
    void show();
};

#endif //ABB1_BINARYTHREE_H
