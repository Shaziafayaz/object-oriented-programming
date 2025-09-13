#include <stdio.h>

int main() {
    int n, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");   // New line after row
    }

    return 0;
}
