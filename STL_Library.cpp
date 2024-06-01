#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>

int main() {
    // Vector example
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector elements: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // List example
    std::list<char> lst = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "List elements: ";
    for (char c : lst) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // Map example
    std::map<int, std::string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    mp[3] = "Three";
    std::cout << "Map elements: ";
    for (const auto& pair : mp) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    std::cout << std::endl;

    // Algorithm example
    std::vector<int> numbers = {5, 2, 9, 4, 7, 1, 3, 8, 6};
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
