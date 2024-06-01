#include <iostream>
#include <array>
#include <list>

int main() {
    // Array example
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::cout << "Array Example:" << std::endl;
    std::cout << "First element: " << arr[0] << std::endl; // Direct access using []
    std::cout << "Second element: " << arr.at(1) << std::endl; // Access using at() method
    std::cout << "Size of array: " << arr.size() << std::endl;

    // List example
    std::list<int> myList = {1, 2, 3, 4, 5};

    std::cout << "\nList Example:" << std::endl;
    std::cout << "First element: " << myList.front() << std::endl; // Access first element using front()
    std::cout << "Second element: " << *std::next(myList.begin(), 1) << std::endl; // Access second element using iterator
    std::cout << "Size of list: " << myList.size() << std::endl;

    return 0;
}
