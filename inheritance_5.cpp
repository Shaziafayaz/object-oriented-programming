#include <iostream>
using namespace std;
class Teacher {
protected:
    string name;
    string subject;
public:
    Teacher(string n, string s) {
        name = n;
        subject = s;
    }
};
class Researcher {
protected:
    int papers;
    string domain;
public:
    Researcher(int p, string d) {
        papers = p;
        domain = d;
    }
};
class Faculty : public Teacher, public Researcher {
public:
    Faculty(string n, string s, int p, string d)
        : Teacher(n, s), Researcher(p, d) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Domain: " << domain << endl;
        cout << "Published Papers: " << papers << endl;
    }
};
int main() {
    Faculty f1("Dr. Khan", "Computer Science", 12, "Artificial Intelligence");
    f1.display();
    return 0;
}