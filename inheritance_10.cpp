#include <iostream>
using namespace std;

//  EMPLOYEE CLASS 
class Employee {
protected:
    int empNumber;
    float compensation;

public:
    void getData() {
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter compensation: ";
        cin >> compensation;
    }

    void showData() {
        cout << "\nEmployee Number: " << empNumber;
        cout << "\nCompensation: " << compensation;
    }
};

//  MANAGER CLASS 
class Manager : public Employee {
protected:
    string title;
    float dues;

public:
    void getData() {
        Employee::getData();
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter golf club dues: ";
        cin >> dues;
    }

    void showData() {
        Employee::showData();
        cout << "\nTitle: " << title;
        cout << "\nGolf Club Dues: " << dues;
    }
};

//  EXECUTIVE CLASS 
class Executive : public Manager {
    float yearlyBonus;
    int stockShares;

public:
    void getData() {
        Manager::getData();
        cout << "Enter yearly bonus: ";
        cin >> yearlyBonus;
        cout << "Enter number of stock shares: ";
        cin >> stockShares;
    }

    void showData() {
        Manager::showData();
        cout << "\nYearly Bonus: " << yearlyBonus;
        cout << "\nStock Shares: " << stockShares;
    }
};

// MAIN FUNCTION 
int main() {
    Executive e;

    cout << "\n--- Enter Executive Details ---\n";
    e.getData();

    cout << "\n\n--- Executive Information ---";
    e.showData();

    return 0;
}
