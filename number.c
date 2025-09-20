
#include <stdio.h>
int main() {
    int N, i, num;
    int smallest, largest;
    float sum = 0, average;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Invalid number of elements!\n");
        return 0;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    smallest = largest = num;
    sum = num;
    for (i = 2; i <= N; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;
        sum += num;
    }
    average = sum / N;
    printf("\nSmallest = %d\n", smallest);
    printf("Largest = %d\n", largest);
    printf("Average = %.2f\n", average);

    return 0;
}