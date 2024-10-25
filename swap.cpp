#include <iostream>
using namespace std;

class Swap {
public:
    Swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    Swap swapObj(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;
}
