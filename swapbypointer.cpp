/*Write a program that swaps two numbers using call by pointers. The function should 
accept two integer pointers and perform the swap using dereferencing. */

#include <iostream>
using namespace std;

// Function to swap using pointers
void swapPointer(int *x, int *y) {
    int temp;
    temp = *x;  // get value at address x
    *x = *y;    // assign value at address y to address x
    *y = temp;  // assign temp to address y
    cout << "Inside function (after swapping): *x = " << *x << ", *y = " << *y << endl;
}

int main() {
    int a = 5, b = 10;

    cout << "Before function call: a = " << a << ", b = " << b << endl;

    swapPointer(&a, &b);  // passing addresses of a and b

    cout << "After function call: a = " << a << ", b = " << b << endl;

    return 0;
}




