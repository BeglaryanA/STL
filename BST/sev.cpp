#include <iostream>
#include <map>
#include <unordered_map>
// 1633812484
int pick(int& target, char b1, char b2, short sh) {
    // target = 0;
    // target |= b1;
    // target = target << 8;
    // target |= b2;
    // target = target << 16;
    // target |= sh;
    char* tmp = (char*) &target;
    *tmp = b1;
    ++tmp;
    *tmp = b2;
    short* ptr = (short*) &target;
    ++ptr;
    *ptr = sh; 

    return target;
}

int main() {
    // std::unordered_map<std::string, float> coll;
    // coll["VAL1"] = 0.16;
    // coll["VAL2"] = 12.3;
    // coll["VAL3"] = 3.4;
    // std::cout << "VAL3 " << coll["VAL3"] << std::endl;
    // coll.at("VAL4") = 5.4;
    // std::cout << "VAL3 " << coll["VAL3"] << std::endl;
    int a;
    pick(a, 'a', 'b', 4);
    std::cout << a;

}

