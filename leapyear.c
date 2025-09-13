#include <stdio.h>

int main() {
    int year, count = 0, nextYear;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year with nested if-else
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year\n", year);
            } else {
                printf("%d is NOT a Leap Year\n", year);
            }
        } else {
            printf("%d is a Leap Year\n", year);
        }
    } else {
        printf("%d is NOT a Leap Year\n", year);
    }

    // If no a leap year then print next 5 leap 
    if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        printf("Next 5 Leap Years are:\n");
        nextYear = year + 1;

        while (count < 5) {
            if (nextYear % 4 == 0) {
                if (nextYear % 100 == 0) {
                    if (nextYear % 400 == 0) {
                        printf("%d ", nextYear);
                        count++;
                    }
                } else {
                    printf("%d ", nextYear);
                    count++;
                }
            }
            nextYear++;
        }
        printf("\n");
    }

    return 0;
}

