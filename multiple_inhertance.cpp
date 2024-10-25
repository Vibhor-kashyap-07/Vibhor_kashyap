#include <iostream>
using namespace std;

class Base1 {
protected:
    int a;
public:
    Base1(int x) : a(x) {}
};

class Base2 {
protected:
    int b;
public:
    Base2(int y) : b(y) {}
};

class Derived : public Base1, public Base2 {
public:
    Derived(int x, int y) : Base1(x), Base2(y) {}

    void sum() {
        cout << "Sum: " << (a + b) << endl;
    }
};

int main() {
    Derived obj(5, 10);
    obj.sum();
    return 0;
}
