#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    int index;
    printf("\nEnter the index of the element to access (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        printf("Element at index %d: %d (Memory Address: %p)\n", index, *(ptr + index), (void*)(ptr + index));
    } else {
        printf("Error: Index out of bounds!\n");
    }

    return 0;
}
