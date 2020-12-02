#include <iostream>
#include "BinaryThree.h"

using namespace std;

void showSearch(BinaryThree* three, int data) {
    try {
        Node* value = three->search(data);

        cout << "Valor: " << value->getValue() << endl;
        if (value->getLeft() != nullptr)
            cout << "Hijo Izquierdo: " << value->getLeft()->getValue() << endl;
        if (value->getRight())
            cout << "Hijo Derecho: " << value->getRight()->getValue() << endl;
    } catch (const char *e) {
        cout << e << endl;
    }
}

int main() {

    BinaryThree *three = new BinaryThree();

    three->insert(10);
    three->insert(5);
    three->insert(3);
    three->insert(7);
    three->insert(15);
    three->insert(12);
    three->insert(20);

    three->show();
    cout << endl;
    cout << endl;

    /*showSearch(three, 5);
    cout << endl;

    three->remove(7);
    cout << endl;

    showSearch(three, 5);*/

    cout << three->isLeaf(3) << endl;
    cout << three->isLeaf(7) << endl;
    cout << three->isLeaf(12) << endl;

    delete three;
    return 0;
}
