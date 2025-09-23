/*Problem:
In a library:

If a book is returned within 7 days → No fine

8–15 days → ₹5 per day

16–30 days → ₹10 per day

Beyond 30 days → ₹500 fixed fine + membership cancellation

Calculate fine based on number of days late.

Solution:
Take number of days late as input, use conditions to decide fine.*/

#include <stdio.h>

int main() {
    int days, fine = 0;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    if(days <= 7)
        fine = 0;
    else if(days <= 15)
        fine = (days - 7) * 5;
    else if(days <= 30)
        fine = (8 * 5) + (days - 15) * 10;
    else
        fine = 500; // membership cancelled

    if(days <= 30)
        printf("Fine = Rs %d\n", fine);
    else
        printf("Fine = Rs %d (Membership Cancelled!)\n", fine);

    return 0;
}
