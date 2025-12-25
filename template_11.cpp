#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 20;

// -------- EXCEPTION CLASS --------
class StringError {
public:
    string msg;
    StringError(string m) {
        msg = m;
    }
};

// -------- STRING CLASS --------
class MyString {
private:
    char str[MAX];

public:
    // Default constructor
    MyString() {
        str[0] = '\0';
    }

    // One-argument constructor
    MyString(const char* s) {
        if (strlen(s) >= MAX)
            throw StringError("Initialization string too long");

        strcpy(str, s);
    }

    // Overloaded + operator
    MyString operator+(MyString s) {
        if (strlen(str) + strlen(s.str) >= MAX)
            throw StringError("Resulting string too long");

        MyString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() const {
        cout << str;
    }
};

// -------- MAIN FUNCTION --------
int main() {
    try {
        MyString s1("Hello");
        MyString s2("World");
        MyString s3;

        s3 = s1 + s2;
        cout << "Result: ";
        s3.display();
        cout << endl;
    }
    catch (StringError e) {
        cout << "Exception: " << e.msg << endl;
    }

    return 0;
}
