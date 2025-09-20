#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    int N, i, num;
    int smallest, largest;
    float sum = 0, average;
    float sum_squares = 0, std_dev, range;

    // Input number of elements
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid number of elements!\n");
        return 0;
    }

    // First input
    printf("Enter number 1: ");
    scanf("%d", &num);

    smallest = largest = num;
    sum = num;
    sum_squares = num * num;

    // Process remaining numbers
    for (i = 2; i <= N; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;

        sum += num;
        sum_squares += num * num;
    }

    // Calculate average
    average = sum / N;

    // Calculate range
    range = largest - smallest;

    // Calculate standard deviation
    std_dev = sqrt((sum_squares / N) - (average * average));

    // Output results
    printf("\nSmallest = %d\n", smallest);
    printf("Largest = %d\n", largest);
    printf("Average = %.2f\n", average);
    printf("Range = %.2f\n", range);
    printf("Standard Deviation = %.2f\n", std_dev);

    return 0;
}

