#include <iostream>
#include "BST.hpp"

int main() {
    BST<int> bs;
    bs.insert(5);
    bs.insert(4);
    bs.insert(6);
    bs.insert(8);
    bs.preorder();
    


    return 0;
}