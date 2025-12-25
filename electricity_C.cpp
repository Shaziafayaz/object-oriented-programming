#include <iostream>
using namespace std;
class Bill {
    int units;
public:
    Bill(int u) {
        units = u;
    }
    Bill(Bill &b) {
        units = b.units;
    }
    void display() {
        int total = units * 5;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: ₹" << total << endl;
    }
};
int main() {
    Bill b1(120);
    Bill b2 = b1;
    cout << "Original Bill" << endl;
    b1.display();
    cout << "Copied Bill" << endl;
    b2.display();
    return 0;
}