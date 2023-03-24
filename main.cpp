#include "Algorithms/BubbleShort.cpp"
#include "structures/Linked_List.h"
#include <iostream>
#include <vector>
#define log(x) std::cout << x << std::endl;

std::ostream &operator<<(std::ostream &os, const std::vector<int> &vec) {
    for (int i = 0; i < vec.size(); ++i) {
        os << vec.at(i);
        os << ", ";
    }
    return os;
}

struct Rectangle {
    int length;
    int width;
};
int main() {
    //    std::vector<int> testVals = {4,6,7,8,9,3,4,2,5,6,7};
    //    std::cout << "Hello, World!" << std::endl;
    //    SelectionSort(testVals);
    //    std::cout<<testVals;
    List list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insertAtIndex(4, 1);

    return 0;
}
