#include <iostream>
using namespace std;

// -------- TEMPLATE FUNCTION --------
template <class T>
T amax(T arr[], int size) {
    T maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

// -------- MAIN FUNCTION --------
int main() {
    int a1[] = {10, 20, 5, 40};
    float a2[] = {1.5f, 3.2f, 0.8f};
    char a3[] = {'A', 'Z', 'M'};

    cout << "Max of int array: "
         << amax(a1, 4) << endl;

    cout << "Max of float array: "
         << amax(a2, 3) << endl;

    cout << "Max of char array: "
         << amax(a3, 3) << endl;

    return 0;
}
