#include <iostream>
using namespace std;

int main() {
    float f, c;
    int ch;
    cout << "Type 1 for temp in Celsius" << endl;
    cout << "Type 2 for temp in Fahrenheit" << endl;
    cin >> ch;

    switch(ch) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> c;
            f = (c * 9/5) + 32;
            cout << "Temperature in Fahrenheit is: " << f;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> f;
            c = (f - 32) * 5/9;
            cout << "Temperature in Celsius is: " << c;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}