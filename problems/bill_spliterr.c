/* Problem:
Friends go to a restaurant and pay a total bill. Calculate how much each friend has to pay if the bill and number of friends are given.

Solution:
Take total bill and number of friends as input. Divide bill by number of friends to get share per person.*/
#include <stdio.h>

int main() {
    float bill;
    int friends;
    printf("Enter total bill amount: ");
    scanf("%f", &bill);
    printf("Enter number of friends: ");
    scanf("%d", &friends);

    if (friends > 0)
        printf("Each friend pays: Rs %.2f\n", bill / friends);
    else
        printf("Invalid number of friends.\n");

    return 0;
}
