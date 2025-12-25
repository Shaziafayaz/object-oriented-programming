#include <iostream>
using namespace std;

// -------- TEMPLATE SWAP FUNCTION --------
template <class T>
void swaps(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// -------- MAIN FUNCTION --------
int main() {
    int i1 = 10, i2 = 20;
    float f1 = 1.5f, f2 = 2.5f;
    char c1 = 'A', c2 = 'Z';

    cout << "Before swap (int): " << i1 << " " << i2 << endl;
    swaps(i1, i2);
    cout << "After swap (int): " << i1 << " " << i2 << endl;

    cout << "\nBefore swap (float): " << f1 << " " << f2 << endl;
    swaps(f1, f2);
    cout << "After swap (float): " << f1 << " " << f2 << endl;

    cout << "\nBefore swap (char): " << c1 << " " << c2 << endl;
    swaps(c1, c2);
    cout << "After swap (char): " << c1 << " " << c2 << endl;

    return 0;
}
