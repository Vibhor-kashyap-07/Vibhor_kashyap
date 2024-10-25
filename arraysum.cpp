#include <iostream>
using namespace std;

class ArraySum {
    int* arr;
    int size;

public:
    ArraySum(int* inputArr, int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
    }

    ArraySum(const ArraySum &obj) {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    int sumPositive() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) sum += arr[i];
        }
        return sum;
    }

    ~ArraySum() {
        delete[] arr;
    }
};

int main() {
    int numbers[] = {1, -2, 3, 4, -5};
    ArraySum obj(numbers, 5);
    cout << "Sum of positive numbers: " << obj.sumPositive() << endl;
    return 0;
}
