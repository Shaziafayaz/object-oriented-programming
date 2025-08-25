#include <stdio.h>

int main() {
    int n, i;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];  /
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];  
        }
    }

    printf("The largest element is %d\n", largest);

    return 0;
}

    