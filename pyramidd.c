#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // print ascending nos
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // print descending nos
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
