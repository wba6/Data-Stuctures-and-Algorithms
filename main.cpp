#include "Algorithms/BubbleShort.cpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> testVals = {4,6,7,8,9,3,4,2,5,6,7};
    std::cout << "Hello, World!" << std::endl;
    BubbleShort(testVals);
    for (int i = 0; i < testVals.size(); ++i) {
        std::cout <<testVals.at(i)<<", ";
    }
    return 0;
}
