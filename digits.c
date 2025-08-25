#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        sum = sum + n % 10;  // add last digit to summ
        n = n / 10;          // remove lastt digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
