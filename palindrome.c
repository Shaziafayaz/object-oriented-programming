#include <stdio.h>

int main() {
    int number, reversed = 0, temp, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;  

    while(temp > 0) {
        lastDigit = temp % 10;          
        reversed = reversed * 10 + lastDigit;
        temp = temp / 10;
    }

    if(number == reversed)
        printf("%d is a palindrome\n", number);
    else
        printf("%d is not a palindrome\n", number);

    return 0;
}
