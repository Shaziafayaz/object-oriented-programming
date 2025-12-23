/*Write a program to demonstrate call by value by defining a function swapValue(int a, int 
b) that swaps two integers. Show that the swap does not affect the original variables in 
main().*/


    
#include <iostream>
using namespace std;

void swapValue(int a, int b)
 {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside function: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 5, y = 10;

    cout << "Before function call: x = " << x << ", y = " << y << endl;

    swapValue(x, y);  // call by value

    cout << "After function call: x = " << x << ", y = " << y << endl;

    return 0;
}
