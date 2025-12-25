#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    float basic;
public:
    Employee(string n, int i, float b) {
        name = n;
        id = i;
        basic = b;
    }
};
class Salary : public Employee {
public:
    Salary(string n, int i, float b) : Employee(n, i, b) {}
    void display() {
        float hra = basic * 0.20;
        float da = basic * 0.10;
        float pf = basic * 0.08;
        float net = basic + hra + da - pf;
        cout << "------ Salary Slip ------" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Basic Salary: ₹" << basic << endl;
        cout << "HRA: ₹" << hra << endl;
        cout << "DA: ₹" << da << endl;
        cout << "PF: ₹" << pf << endl;
        cout << "Net Salary: ₹" << net << endl;
    }
};
int main() {
    Salary e1("Rahul", 101, 25000);
    e1.display();
    return 0;
}