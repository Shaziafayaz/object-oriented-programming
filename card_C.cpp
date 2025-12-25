#include <iostream>
using namespace std;
class Item {
    int *price;
    int *quantity;
public:
    Item(int p, int q) {
        price = new int;
        quantity = new int;
        *price = p;
        *quantity = q;
    }
    void display() {
        int total = (*price) * (*quantity);
        cout << "Total Cost = ₹" << total << endl;
    }
    ~Item() {
        delete price;
        delete quantity;
    }
};
int main() {
    Item i1(50, 4);
    i1.display();
    return 0;
}