#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    float a, b, c, D, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Conditional operator
    (a == 0) ? printf("Not a quadratic equation (a cannot be 0)\n") : (
        
        D = b * b - 4 * a * c,

        // Nested if-else 
        (D > 0) ? (
            root1 = (-b + sqrt(D)) / (2 * a),
            root2 = (-b - sqrt(D)) / (2 * a),
            printf("Real and Distinct Roots: %.2f and %.2f\n", root1, root2)
        ) :
        (D == 0) ? (
            root1 = root2 = -b / (2 * a),
            printf("Real and Equal Roots: %.2f and %.2f\n", root1, root2)
        ) :
        printf("Imaginary Roots\n")
    );

    return 0;
}
