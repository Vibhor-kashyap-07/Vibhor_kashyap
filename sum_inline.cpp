#include <iostream>

class Student {
public:
    // Inline function to display the sum of two numbers
    void displaySum(int a, int b) {
        std::cout << "The sum of " << a << " and " << b << " is: " << (a + b) << std::endl;
    }
};

int main() {
    Student student;
    student.displaySum(5, 10);  // Example usage
    return 0;
}
