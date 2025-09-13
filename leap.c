#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    // Check for invalid year
    if (year <= 0) {
        printf("Invalid year! Year must be greater than 0.\n");
    }
    else {

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a Leap Year.\n", year);
        }
        else {
            printf("%d is NOT a Leap Year.\n", year);
        }
    }

    return 0;
}
