#include <iostream>
using namespace std;

//  SAFE ARRAY CLASS --------
class SafeArray {
private:
    int arr[10];

public:
    int& operator[](int index) {
        if (index < 0 || index >= 10)
            throw "Index out of bounds!";
        return arr[index];
    }
};

//  MAIN FUNCTION --------
int main() {
    SafeArray sa;

    try {
        for (int i = 0; i < 10; i++)
            sa[i] = i * 10;

        // This will cause exception
        sa[15] = 100;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
