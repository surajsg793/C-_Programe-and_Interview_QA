#include <iostream>
using namespace std;

// Declaration of an inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3;

    // Call to the inline function
    int result = add(num1, num2);

    cout << "Sum: " << result << endl;

    return 0;
}
