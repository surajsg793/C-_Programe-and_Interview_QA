#include <iostream>
#include <cstdlib>

int main() {
    // Using new to dynamically allocate memory for an integer
    int *newPtr = new int(5);

    if (newPtr != nullptr) {
        std::cout << "Memory allocated using new: " << *newPtr << std::endl;
        delete newPtr; // Free the dynamically allocated memory
    } else {
        std::cout << "Memory allocation using new failed" << std::endl;
    }

    // Using malloc to dynamically allocate memory for an integer
    int *mallocPtr = (int*)malloc(sizeof(int));

    if (mallocPtr != nullptr) {
        *mallocPtr = 10;
        std::cout << "Memory allocated using malloc: " << *mallocPtr << std::endl;
        free(mallocPtr); // Free the dynamically allocated memory
    } else {
        std::cout << "Memory allocation using malloc failed" << std::endl;
    }

    return 0;
}
