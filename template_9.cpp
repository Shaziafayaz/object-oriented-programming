#include <iostream>
using namespace std;

//EXCEPTION CLASS -
class IndexError {
public:
    int index;
    IndexError(int i) {
        index = i;
    }
};

//  SAFE ARRAY CLASS 
class SafeArray {
private:
    int arr[10];

public:
    int& operator[](int index) {
        if (index < 0 || index >= 10)
            throw IndexError(index);
        return arr[index];
    }
};

//  MAIN FUNCTION 
int main() {
    SafeArray sa;

    try {
        for (int i = 0; i < 10; i++)
            sa[i] = i * 10;

        // Invalid access
        sa[12] = 50;
    }
    catch (IndexError e) {
        cout << "Exception: Index out of bounds -> "
             << e.index << endl;
    }

    return 0;
}
