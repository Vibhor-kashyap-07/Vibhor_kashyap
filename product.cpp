#include <iostream>
using namespace std;

class Base {
protected:
    int a, b;
public:
    Base(int x, int y) : a(x), b(y) {}
};

class Derived : public Base {
public:
    Derived(int x, int y) : Base(x, y) {}

    void product() {
        cout << "Product: " << (a * b) << endl;
    }
};

int main() {
    Derived obj(5, 10);
    obj.product();
    return 0;
}
