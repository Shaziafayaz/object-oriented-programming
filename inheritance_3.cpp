#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};
class Student : public Person {
protected:
    int roll;
    string course;
public:
    Student(string n, int a, int r, string c) : Person(n, a) {
        roll = r;
        course = c;
    }
};
class Result : public Student {
    int m1, m2, m3;
public:
    Result(string n, int a, int r, string c, int x, int y, int z)
        : Student(n, a, r, c) {
        m1 = x;
        m2 = y;
        m3 = z;
    }
    void display() {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Result r1("Aisha", 20, 45, "BTech", 78, 82, 90);
    r1.display();
    return 0;
}