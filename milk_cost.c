/*Problem:
Each packet of milk costs ₹50. Find the total cost if the number of packets is given.

Solution:
Take number of packets as input, then multiply it by 50 to get the total cost.

 */
#include <stdio.h>

int main() {
    int packets;
    printf("Enter number of milk packets: ");
    scanf("%d", &packets);

    printf("Total cost = Rs %d\n", packets * 50);
    return 0;
}
