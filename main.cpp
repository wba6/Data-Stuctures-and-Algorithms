#include "Algorithms/BubbleShort.cpp"
#include <iostream>
#include <vector>

std::ostream & operator<<(std::ostream& os, const std::vector<int> & vec) {
    for (int i = 0; i < vec.size(); ++i) {
        os <<vec.at(i);
        os <<", ";
    }
    return os;
}

int main() {
    std::vector<int> testVals = {4,6,7,8,9,3,4,2,5,6,7};
    std::cout << "Hello, World!" << std::endl;
    SelectionSort(testVals);
    std::cout<<testVals;
    return 0;
}
