/*Problem:
A parking lot charges as follows:

First 2 hours → ₹50

Next 3 hours → ₹20 per hour

Beyond 5 hours → ₹10 per hour

Given the number of hours a vehicle was parked, calculate the total parking fee.

Solution:
Take hours as input. Use conditional checks to calculate total fee based on time ranges.*/

#include <stdio.h>

int main() {
    int hours;
    float fee;

    printf("Enter hours parked: ");
    scanf("%d", &hours);

    if(hours <= 2)
        fee = 50;
    else if(hours <= 5)
        fee = 50 + (hours - 2) * 20;
    else
        fee = 50 + (3 * 20) + (hours - 5) * 10;

    printf("Parking fee = Rs %.2f\n", fee);
    return 0;
}
