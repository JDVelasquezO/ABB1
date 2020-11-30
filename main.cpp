#include <iostream>
#include "BinaryThree.h"

using namespace std;

int main() {

    BinaryThree *three = new BinaryThree();

    three->insert(6);
    three->insert(5);
    three->insert(7);
    three->insert(5);

    return 0;
}
