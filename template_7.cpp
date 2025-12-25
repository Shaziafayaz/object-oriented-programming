#include <iostream>
using namespace std;

// -------- TEMPLATE FRACTION CLASS --------
template <class T>
class frac {
private:
    T num;   // numerator
    T den;   // denominator

public:
    frac() {
        num = 0;
        den = 1;
    }

    frac(T n, T d) {
        num = n;
        den = d;
    }

    // Addition
    frac operator+(frac f) {
        return frac(num * f.den + f.num * den, den * f.den);
    }

    // Subtraction
    frac operator-(frac f) {
        return frac(num * f.den - f.num * den, den * f.den);
    }

    // Multiplication
    frac operator*(frac f) {
        return frac(num * f.num, den * f.den);
    }

    // Division
    frac operator/(frac f) {
        return frac(num * f.den, den * f.num);
    }

    void show() {
        cout << (int)num << "/" << (int)den;
    }
};

// -------- MAIN FUNCTION --------
int main() {
    frac<char> f1(2, 3);
    frac<char> f2(1, 4);

    frac<char> result;

    cout << "f1 = ";
    f1.show();
    cout << "\nf2 = ";
    f2.show();

    result = f1 + f2;
    cout << "\nf1 + f2 = ";
    result.show();

    result = f1 - f2;
    cout << "\nf1 - f2 = ";
    result.show();

    result = f1 * f2;
    cout << "\nf1 * f2 = ";
    result.show();

    result = f1 / f2;
    cout << "\nf1 / f2 = ";
    result.show();

    cout << endl;
    return 0;
}
