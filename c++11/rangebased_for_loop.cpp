#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    for (auto element : vec)
        std::cout << element << std::endl; // read only

    for (auto &element : vec) {
        element += 1; // writeable
    }
    
    for (auto element : vec)
        std::cout << element << std::endl; // read only
}
