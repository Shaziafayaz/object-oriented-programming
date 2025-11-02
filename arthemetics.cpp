
#include <iostream>

using namespace std;
int main() {
    double num1, num2, result;
    char op;
    char type1, type2;
    cout << "Enter first operand type (i for int, f for float, d for double): ";
    cin >> type1;
    cout << "Enter first operand: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second operand type (i for int, f for float, d for double): ";
    cin >> type2;
    cout << "Enter second operand: ";
    cin >> num2;
    if (type1 == 'i' && type2 == 'f')
        cout << "\nPromoting int to float\n";
    else if (type1 == 'i' && type2 == 'd')
        cout << "\nPromoting int to double\n";
    else if (type1 == 'f' && type2 == 'd')
        cout << "\nPromoting float to double\n";
    else if (type1 == 'f' && type2 == 'i')
        cout << "\nPromoting int to float\n";
    else if (type1 == 'd' && (type2 == 'i' || type2 == 'f'))
        cout << "\nSecond operand promoted to double\n";
    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator!\n";
            return 1;
    }
    cout << "\nResult after applying type promotion: " << result << endl;
    return 0;
}