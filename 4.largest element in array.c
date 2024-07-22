#include <stdio.h>

int main() {
    int n, i;
    int max;
    printf("R.Gnana Prakash Reddy\n");

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of the given size
    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the maximum element
    max = arr[0];

    // Find the maximum element in the array
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output the maximum element
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
