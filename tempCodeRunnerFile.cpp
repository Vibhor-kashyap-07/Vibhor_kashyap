#include <iostream>
using namespace std;

class Sum{
    int n;
public:
    Sum(){
        cout << "Enter a number:";
        cinn >> n;
        int sum = n*(n+1)/2;
        cout << "Sum of first" << n << "natural numbers is:" << sum << endl;
    }    
};

int main(){
    Sum obj;
    return 0;
}