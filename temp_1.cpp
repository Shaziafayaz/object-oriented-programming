#include <iostream>
using namespace std;

// Template function to find average
template <class T>
double average(T arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

int main()
{
    int a1[] = {1, 2, 3, 4, 5};
    long a2[] = {10, 20, 30, 40};
    double a3[] = {2.5, 3.5, 4.5};
    char a4[] = {'A', 'B', 'C'};   // ASCII values used

    cout << "Average of int array: " << average(a1, 5) << endl;
    cout << "Average of long array: " << average(a2, 4) << endl;
    cout << "Average of double array: " << average(a3, 3) << endl;
    cout << "Average of char array: " << average(a4, 3) << endl;

    return 0;
}
