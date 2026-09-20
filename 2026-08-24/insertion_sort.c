#include <stdio.h>

void printFinalArray(int array[], int size) {
    printf("\nFinal Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;
        
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }
        
        array[j + 1] = key;
        
        printf("Step %d: ", step);
        for (int k = 0; k < size; ++k) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int data[size];
    
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &data[i]);
    }
    
    printf("\n--- Sorting Process ---\n");
    insertionSort(data, size);
    
    printFinalArray(data, size);
    
    return 0;
}