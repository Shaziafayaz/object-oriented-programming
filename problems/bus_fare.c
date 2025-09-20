/* Problem: You board a bus. Rules:
Age < 5 → Free ride
Age 5–18 → Half fare (₹10)
Age > 18 → Full fare (₹20)
Solution Idea:
Input age
Decide fare based on conditions*/
#include <stdio.h>

int main() {
    int age, fare;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5)
        fare = 0;
    else if (age <= 18)
        fare = 10;
    else
        fare = 20;

    printf("Bus Fare =  rs%d\n", fare);
    return 0;
}
