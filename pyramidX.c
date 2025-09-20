#include <stdio.h>

int main() {
    int i, j, space;
    int lines = 20;

    for (i = 1; i <= lines; i++) {
        // print spaces
        for (space = 1; space <= lines - i; space++) {
            printf(" ");
        }
        // print X
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}
