
#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num; // store original no

    while (temp > 0) {
        digit = temp % 10;        // extract last digit
        sum += digit;             // add digit 
        product *= digit;         // multiply digit 
        temp /= 10;               // remove last digit
    }

    printf("Number: %d\n", num);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}
