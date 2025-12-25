#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

// ---------------- TOKEN BASE CLASS ----------------
class Token {
public:
    virtual float getValue() = 0;
    virtual char getOperator() = 0;
    virtual bool isNumber() = 0;
    virtual ~Token() {}
};

// ---------------- NUMBER CLASS ----------------
class Number : public Token {
    float value;

public:
    Number(float v) {
        value = v;
    }

    float getValue() {
        return value;
    }

    char getOperator() {
        return '\0';
    }

    bool isNumber() {
        return true;
    }
};

// ---------------- OPERATOR CLASS ----------------
class Operator : public Token {
    char oper;

public:
    Operator(char c) {
        oper = c;
    }

    float getValue() {
        return 0;
    }

    char getOperator() {
        return oper;
    }

    bool isNumber() {
        return false;
    }
};

// ---------------- APPLY OPERATOR ----------------
float apply(float a, float b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

// ---------------- MAIN FUNCTION ----------------
int main() {
    stack<Token*> s;
    char ch;
    float number;

    cout << "Enter expression (example: 3.5 2.1 + ): ";

    while (cin >> ch && ch != '=') {
        if (isdigit(ch)) {
            cin.putback(ch);
            cin >> number;

            Number* ptrN = new Number(number);
            s.push(ptrN);
        }
        else {
            Operator* ptrO = new Operator(ch);
            s.push(ptrO);

            Token* t2 = s.top(); s.pop();
            Token* t1 = s.top(); s.pop();
            Token* t0 = s.top(); s.pop();

            float b = t2->getValue();
            float a = t1->getValue();
            char op = t0->getOperator();

            float ans = apply(a, b, op);

            delete t0;
            delete t1;
            delete t2;

            Number* result = new Number(ans);
            s.push(result);
        }
    }

    cout << "Result = " << s.top()->getValue() << endl;

    delete s.top();
    return 0;
}
