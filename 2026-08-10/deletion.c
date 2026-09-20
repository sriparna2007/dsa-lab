#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deleteElement(int arr[], int n, int pos) {
    // Optional: Add verification to ensure the position is valid
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n; 
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;

    printf("The array elements are: ");
    printArray(arr, n);

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    n = deleteElement(arr, n, pos);

    printf("The new array elements are: ");
    printArray(arr, n);

    return 0;
}