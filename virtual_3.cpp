#include <iostream>
using namespace std;


class Array {
private:
    int* ptr;     // pointer to array
    int size;     // size of array

public:
    // One-argument constructor
    Array(int s) {
        size = s;
        ptr = new int[size];
    }

    // COPY CONSTRUCTOR (deep copy)
    Array(const Array& arr) {
        size = arr.size;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = arr.ptr[i];
        }
    }

    // ASSIGNMENT OPERATOR (deep copy)
    Array& operator=(const Array& arr) {
        if (this == &arr)       // self-assignment check
            return *this;

        delete[] ptr;           // free old memory
        size = arr.size;
        ptr = new int[size];

        for (int i = 0; i < size; i++) {
            ptr[i] = arr.ptr[i];
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] ptr;
    }

    // Subscript operator
    int& operator[](int j) {
        return ptr[j];
    }

    // Display function
    void show() {
        for (int i = 0; i < size; i++)
            cout << ptr[i] << " ";
        cout << endl;
    }
};


int main() {
    const int ASIZE = 5;

    Array arr1(ASIZE);
    for (int i = 0; i < ASIZE; i++)
        arr1[i] = i * i;

    cout << "arr1: ";
    arr1.show();

    // Test COPY CONSTRUCTOR
    Array arr2(arr1);
    cout << "arr2 (copy constructor): ";
    arr2.show();

    // Test ASSIGNMENT OPERATOR
    Array arr3(3);   // different size
    arr3 = arr1;
    cout << "arr3 (assignment operator): ";
    arr3.show();

    return 0;
}
