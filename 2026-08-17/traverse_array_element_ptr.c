#include <stdio.h>

void traverseArray(int *ptr, int length) {
    printf("\nTraversing array elements using a pointer:\n\n");
    for(int i = 0; i < length; i++) {
        printf("Element at index %d: %d (Memory Address: %p)\n", i, *(ptr + i), (void*)(ptr + i));
    }
}

int main() {
    int n; 

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    traverseArray(arr, n);

    return 0;
}