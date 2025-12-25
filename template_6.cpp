#include <iostream>
using namespace std;

// -------- TEMPLATE SAFE ARRAY CLASS --------
template <class T>
class SafeArray {
private:
    T arr[10];

public:
    T& operator[](int index) {
        if (index < 0 || index >= 10) {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }
};

// -------- MAIN FUNCTION --------
int main() {
    SafeArray<int> intArr;
    SafeArray<float> floatArr;

    // Integer safe array
    for (int i = 0; i < 5; i++)
        intArr[i] = i * 10;

    cout << "Integer Safe Array: ";
    for (int i = 0; i < 5; i++)
        cout << intArr[i] << " ";
    cout << endl;

    // Float safe array
    for (int i = 0; i < 5; i++)
        floatArr[i] = i * 1.5f;

    cout << "Float Safe Array: ";
    for (int i = 0; i < 5; i++)
        cout << floatArr[i] << " ";
    cout << endl;

    return 0;
}
