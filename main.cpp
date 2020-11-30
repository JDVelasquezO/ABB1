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

    three->show();

    return 0;
}
