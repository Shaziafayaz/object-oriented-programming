
#include <stdio.h>

int main() {
    int temp, hot = 0, pleasant = 0, cold = 0, count = 0;
    double sum = 0;

    printf("Enter temperatures (-1 to stop): ");
    while (1) {
        scanf("%d", &temp);
        if (temp == -1) break;

        count++;
        sum += temp;

        if (temp >= 40) hot++;
        else if (temp >= 30) pleasant++;
        else cold++;
    }

    double avg = (count > 0) ? (sum / count) : 0;

    printf("Hot Days: %d\n", hot);
    printf("Pleasant Days: %d\n", pleasant);
    printf("Cold Days: %d\n", cold);
    printf("Average Temperature: %.2f\n", avg);

    return 0;
}