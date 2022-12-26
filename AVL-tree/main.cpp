#include <iostream>
#include "AVL_tree.hpp"

int main() {
    AVL<int> tree {30,20,10,5};
    tree.erase(20); 
    tree.preorder();
}