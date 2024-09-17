#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[100];  // Array to hold the elements
    int i, j;
    int n;         // Total number of elements

    // Input total number of elements
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    // Input elements from the user and store them in the array
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    //  Sort the array in descending order using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array in descending order
    printf("Sorted array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

