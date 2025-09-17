#include <stdio.h>

int main() {
    int d, m, y, leap = 0;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);

    // Check leap year
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        leap = 1;

    // Validate month
    if (m < 1 || m > 12) {
        printf("Invalid Date\n");
        return 0;
    }

    // Days in each month
    int daysInMonth;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        daysInMonth = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        daysInMonth = 30;
    else if (m == 2) {
        if (leap)
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }

    // Validate day
    if (d < 1 || d > daysInMonth) {
        printf("Invalid Date\n");
        return 0;
    }

    printf("Valid Date: %02d-%02d-%d\n", d, m, y);

    // Formula to find day of week (Zeller’s Congruence simplified)have to study more 
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;   // year of century
    int j = y / 100;   // zero-based century
    int h = (d + 13*(m+1)/5 + k + k/4 + j/4 + 5*j) % 7;

    // switch-case 
    switch(h) {
        case 0: printf("Day of week: Saturday\n"); break;
        case 1: printf("Day of week: Sunday\n"); break;
        case 2: printf("Day of week: Monday\n"); break;
        case 3: printf("Day of week: Tuesday\n"); break;
        case 4: printf("Day of week: Wednesday\n"); break;
        case 5: printf("Day of week: Thursday\n"); break;
        case 6: printf("Day of week: Friday\n"); break;
    }

    return 0;
}
