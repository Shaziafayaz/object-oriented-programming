#include <stdio.h>

int main() 
{
    float purchase, discount, finalPrice;

    printf("Enter purchase value: ");
    scanf("%f", &purchase);

    // Nested conditional operators 
    discount = (purchase < 100) ? 0 :
               (purchase <= 500) ? 0.10 * purchase :
               (purchase <= 1000) ? 0.15 * purchase :
               0.20 * purchase;

    finalPrice = purchase - discount;

    printf("Purchase Amount: %.2f\n", purchase);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
