#include <iostream>
using namespace std;

class Number {
    float x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    // Binary +
    Number operator + (Number obj) {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }

    // Binary -
    Number operator - (Number obj) {
        Number temp;
        temp.x = x - obj.x;
        return temp;
    }

    // Binary *
    Number operator * (Number obj) {
        Number temp;
        temp.x = x * obj.x;
        return temp;
    }

    // Binary /
    Number operator / (Number obj) {
        Number temp;
        temp.x = x / obj.x;
        return temp;
    }

    void display() {
        cout << x << endl;
    }
};

int main() {
    Number n1, n2, result;

    n1.getData();
    n2.getData();

    result = n1 + n2;
    result.display();

    result = n1 - n2;
    result.display();

    result = n1 * n2;
    result.display();

    result = n1 / n2;
    result.display();

    return 0;
}
