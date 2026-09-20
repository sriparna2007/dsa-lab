#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int n, int pos, int val) {
    // Optional: Add verification to ensure the position is valid
    if (pos < 0 || pos > n || n >= 6) { 
        printf("Invalid position!\n");
        return n; 
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = val;
    
    return n + 1;
}

int main() {
    int arr[6] = {10, 20, 40, 50}; 
    int n = 4;
    int pos;
    int val;

    printf("The array elements are: ");
    printArray(arr, n);

    printf("Enter the number you want to insert: ");
    scanf("%d", &val);
    
    printf("Enter the position to insert the number: ");
    scanf("%d", &pos);

    n = insertElement(arr, n, pos, val);

    printf("The new array elements are: ");
    printArray(arr, n);

    return 0;
}