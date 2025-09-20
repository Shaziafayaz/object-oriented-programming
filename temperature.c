
#include <stdio.h>

int main() {
    int temp, hot = 0, pleasant = 0, cold = 0;

    printf("Enter temperatures (-1 to stop): ");
    while (1) {
        scanf("%d", &temp);
        if (temp == -1) break;

        if (temp >= 40) hot++;
        else if (temp >= 30) pleasant++;
        else cold++;

        printf("%d is ", temp);
        if (temp >= 40) printf("Hot\n");
        else if (temp >= 30) printf("Pleasant\n");
        else printf("Cold\n");
    }

    printf("Hot Days: %d\n", hot);
    printf("Pleasant Days: %d\n", pleasant);
    printf("Cold Days: %d\n", cold);

    return 0;
}