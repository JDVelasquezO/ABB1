#include <iostream>
#include "BinaryThree.h"

using namespace std;

int main() {

    BinaryThree *three = new BinaryThree();

    three->insert(200);
    three->insert(220);
    three->insert(15);
    three->insert(20);
    three->insert(100);

    // three->show();

    try {
        Node value = three->search(20);
        cout << value << endl;
    } catch (const char *e) {
        cout << e << endl;
    }

    delete three;
    return 0;
}
