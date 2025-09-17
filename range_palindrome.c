#include <stdio.h>

int main() 
 {
    int num, original, reversed = 0, digit;
    int start, end;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is Not a Palindrome\n", original);

    // Palindrome no  in a range
    printf("\nEnter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        int temp = i, rev = 0, dig;
        while (temp > 0) {
            dig = temp % 10;
            rev = rev * 10 + dig;
            temp /= 10;
        }
        if (i == rev)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
