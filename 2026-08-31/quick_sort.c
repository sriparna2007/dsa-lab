#include <stdio.h>

void printFinalArray(int array[], int size) {
    printf("\nFinal Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high, int size) {
    int pivot = array[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]); 
        }
    }
    swap(&array[i + 1], &array[high]);
    
    static int step = 1;
    printf("Step %d: ", step++);
    for (int k = 0; k < size; ++k) {
        printf("%d ", array[k]);
    }
    printf("\n");
    
    return (i + 1);
}

void quickSort(int array[], int low, int high, int size) {
    if (low < high) {
        int pi = partition(array, low, high, size);
        quickSort(array, low, pi - 1, size);
        quickSort(array, pi + 1, high, size);
    }
}

int main() {
    int size;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int data[size]; 
    
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
    
    printf("\n--- Sorting Process ---\n");
    quickSort(data, 0, size - 1, size);
    
    printFinalArray(data, size);
    
    return 0;
}