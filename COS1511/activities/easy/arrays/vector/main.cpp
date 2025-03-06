#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};
    vec.push_back(4);       // {1, 2, 3, 4}
    vec.pop_back();         // {1, 2, 3}
    std::cout << "Size: " << vec.size(); // Output: 3
}