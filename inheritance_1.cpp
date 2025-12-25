#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int roll;
public:
    Student(string n, int r) {
        name = n;
        roll = r;
    }
};
class Marks : public Student {
    int m1, m2, m3;
public:
    Marks(string n, int r, int a, int b, int c) : Student(n, r) {
        m1 = a;
        m2 = b;
        m3 = c;
    }
    void display() {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Marks s1("Ayaan", 23, 78, 85, 90);
    s1.display();
    return 0;
}