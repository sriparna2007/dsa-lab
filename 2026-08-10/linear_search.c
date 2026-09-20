#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;

    printf("Enter the number to search in array: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result == -1) {
        printf("Not found\n");
    } else {
        printf("Found at position: %d\n", result);
    }

    return 0;
}