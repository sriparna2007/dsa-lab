#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int binarySearchRecursive(int array[], int x, int low, int high) {
    if (high >= low) { 
        int mid = low + (high - low) / 2;
        
        if (x == array[mid]) {
            return mid;
        }
            
        if (x > array[mid]) {
            return binarySearchRecursive(array, x, mid + 1, high);
        }
            
        return binarySearchRecursive(array, x, low, mid - 1);
    }
    return -1; 
}

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    printf("Original Unsorted Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    insertionSort(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    int result = binarySearchRecursive(arr, target, 0, n - 1);
    
    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found\n", target);

    return 0;
}