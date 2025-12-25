#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() = 0;
};
class Circle : public Shape {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }
    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};
class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }
    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};
class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    void area() {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};
int main() {
    Circle c(7);
    Rectangle r(5, 4);
    Triangle t(6, 3);
    c.area();
    r.area();
    t.area();
    return 0;
}