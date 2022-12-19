#include <iostream>
#include <queue>
#include "queue.hpp"

int main() {
    // std::queue<int> qt;
    // qt.push(5);
    // qt.push(6);
    // qt.push(7);
    // qt.push(8);
    // qt.push(9);
    // qt.push(10);
    // std::cout << qt.front() << std::endl;
    // std::cout << qt.back();
    queue<int> qt;
    qt.push(44);
    qt.push(45);
    qt.push(46);
    qt.push(447);
    qt.push(48);
    queue<int> qt2(std::move(qt));
}