#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base(int x, int y) : num1(x), num2(y) {}
};

class Derived1 : public Base {
public:
    Derived1(int x, int y) : Base(x, y) {}

    void displayNum1() {
        cout << "First Number: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int x, int y) : Base(x, y) {}

    void displayNum2() {
        cout << "Second Number: " << num2 << endl;
    }
};

int main() {
    Derived1 obj1(5, 10);
    Derived2 obj2(5, 10);
    obj1.displayNum1();
    obj2.displayNum2();
    return 0;
}
