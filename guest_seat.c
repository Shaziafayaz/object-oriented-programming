
#include <stdio.h>

long factorial(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int guests, chairs;

    printf("Enter number of guests: ");
    scanf("%d", &guests);
    printf("Enter number of chairs: ");
    scanf("%d", &chairs);

    if (guests < chairs) {
        printf("Guests cannot be fewer than chairs!\n");
        return 0;
    }

    long arrangements = factorial(guests) / factorial(guests - chairs);
    printf("Possible Arrangements: %ld\n", arrangements);

    return 0;
}