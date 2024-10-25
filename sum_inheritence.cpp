#include <iostream>
using namespace std;

class Base {
protected:
    int a;
public:
    Base(int x) : a(x) {}
};

class Derived1 : public Base {
protected:
    int b;
public:
    Derived1(int x, int y) : Base(x), b(y) {}
};

class Derived2 : public Derived1 {
public:
    Derived2(int x, int y) : Derived1(x, y) {}

    void sum() {
        cout << "Sum: " << (a + b) << endl;
    }
};

int main() {
    Derived2 obj(5, 10);
    obj.sum();
    return 0;
}
