#include <stdio.h>

void printFinalArray(int array[], int size) {
    printf("\nFinal Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }
        
        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
        
        printf("Step %d: ", step + 1);
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
    selectionSort(data, size);
    
    printFinalArray(data, size);
    
    return 0;
} 