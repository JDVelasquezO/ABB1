#include <iostream>
#include "BinaryThree.h"

using namespace std;

int main() {

    BinaryThree *three = new BinaryThree();

    three->insert(4);
    three->insert(2);
    three->insert(1);
    three->insert(3);
    three->insert(8);
    three->insert(9);

    three->show();
    cout << endl;
    try {
        Node* value = three->search(8);

        cout << "Valor: " << value->getValue() << endl;
        if (value->getLeft() != nullptr)
            cout << "Hijo Izquierdo: " << value->getLeft()->getValue() << endl;
        if (value->getRight())
            cout << "Hijo Derecho: " << value->getRight()->getValue() << endl;
    } catch (const char *e) {
        cout << e << endl;
    }

    delete three;
    return 0;
}
