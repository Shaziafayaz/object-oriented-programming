#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float average, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);


    if(percentage >= 90)
        printf("Grade: A\n");
    else if(percentage >= 75)
        printf("Grade: B\n");
    else if(percentage >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: F (Fail)\n");


    return 0;
}
