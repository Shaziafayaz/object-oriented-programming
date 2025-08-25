#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // use long long for big factorials

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %lld\n", n, fact);

    return 0;
}
