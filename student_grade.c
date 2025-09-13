#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total, fails = 0;
    float percent;

    // Input marks
    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    
    if (m1 < 40) fails++;
    if (m2 < 40) fails++;
    if (m3 < 40) fails++;
    if (m4 < 40) fails++;
    if (m5 < 40) fails++;

    total = m1 + m2 + m3 + m4 + m5;
    percent = (total / 500.0) * 100;

    // Check fail conditions
    if (fails > 1) {
        printf("Repeat Year\n");
    } else {
        
        if (percent >= 90) {
            printf("Grade: A\n");
        } else {
            if (percent >= 75) {
                printf("Grade: B\n");
            } else {
                if (percent >= 60) {
                    printf("Grade: C\n");
                } else {
                    if (percent >= 40) {
                        printf("Grade: D\n");
                    } else {
                        printf("Grade: F\n");
                    }
                }
            }
        }
    }
    return 0;

}
     


