/*Problem:
Check if the room temperature is within a safe range (18–30°C).

Solution:
Take temperature as input. If it’s between 18 and 30, print safe. Otherwise, alert.*/



#include <stdio.h>

int main() {
    float temp;
    printf("Enter room temperature : ");
    scanf("%f", &temp);

    if(temp >= 18 && temp <= 30)
        printf("Temperature is safe \n");
    else
        printf("Alert! Temperature out of safe range \n");

    return 0;
}