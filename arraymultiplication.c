#include<stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], result[n];

    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Multiplying the arrays element-wise
    for(i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    printf("Resultant array after multiplication:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
