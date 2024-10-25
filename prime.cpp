#include <iostream>

class Number; // Forward declaration of the Number class

class Checker {
public:
    // Function to check if a number is prime
    void checkPrime(Number& num);
};

class Number {
private:
    int value;

public:
    // Constructor to set the number
    Number(int v) : value(v) {}

    // Friend function declaration
    friend class Checker;
};

void Checker::checkPrime(Number& num) {
    int n = num.value;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }
}

int main() {
    Number num(17); // Example number
    Checker checker;
    checker.checkPrime(num); // Check if the number is prime

    return 0;
}
