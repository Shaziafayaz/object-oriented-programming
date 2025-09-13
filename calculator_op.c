#include <stdio.h>

int main()
 {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Using conditional operator
    (op == '+') ? printf("%d + %d = %d\n", a, b, a + b) :
    (op == '-') ? printf("%d - %d = %d\n", a, b, a - b) :
    (op == '*') ? printf("%d * %d = %d\n", a, b, a * b) :
    (op == '/' && b != 0) ? printf("%d / %d = %d\n", a, b, a / b) :
    (op == '%' && b != 0) ? printf("%d %% %d = %d\n", a, b, a % b) :
    printf("Error\n");   

    return 0;
}
