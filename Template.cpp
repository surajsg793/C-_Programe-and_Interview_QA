#include <iostream>

// Template function to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Call the max function with different types
    std::cout << "Max of 3 and 5: " << max(3, 5) << std::endl;
    std::cout << "Max of 3.5 and 2.5: " << max(3.5, 2.5) << std::endl;
    std::cout << "Max of 'a' and 'z': " << max('a', 'z') << std::endl;

    return 0;
}
