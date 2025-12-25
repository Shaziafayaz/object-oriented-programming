#include <iostream>
#include <cmath>     // for modfl()
using namespace std;

//  bMoney CLASS 
class bMoney {
private:
    long double money;

public:
    // default constructor
    bMoney() {
        money = 0.0;
    }

    // one-argument constructor
    bMoney(long double m) {
        money = m;
    }

    void getMoney() {
        cout << "Enter amount: ";
        cin >> money;
    }

    void showMoney() const {
        cout << "$" << money;
    }

    // friend round function
    friend bMoney round(bMoney);
};

// - ROUND FUNCTION -
bMoney round(bMoney m) {
    long double intPart;
    long double fracPart;

    // separate integer and fractional part
    fracPart = modfl(m.money, &intPart);

    if (fracPart < 0.50)
        return bMoney(intPart);       // round down
    else
        return bMoney(intPart + 1.0); // round up
}

// 
//  MAIN FUNCTION 
int main() {
    bMoney mo1, mo2;

    cout << "\nTesting rounding:\n";

    mo1 = bMoney(12.49);
    mo2 = round(mo1);
    mo1.showMoney();
    cout << " rounded = ";
    mo2.showMoney();
    cout << endl;

    mo1 = bMoney(12.50);
    mo2 = round(mo1);
    mo1.showMoney();
    cout << " rounded = ";
    mo2.showMoney();
    cout << endl;

    mo1 = bMoney(12.75);
    mo2 = round(mo1);
    mo1.showMoney();
    cout << " rounded = ";
    mo2.showMoney();
    cout << endl;

    return 0;
}
