#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    A(int x) : a(x) {}
};

class B : public A {
public:
    B(int x) : A(x) {}
};

class C : public A {
public:
    C(int x) : A(x) {}
};

class D : public A {
public:
    D(int x) : A(x) {}
};

class E : public B {
public:
    E(int x) : B(x) {}
};

int main() {
    E obj(5);
    cout << "Hybrid inheritance example created." << endl;
    return 0;
}
