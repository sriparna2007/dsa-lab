#include <stdio.h>

void printFinalArray(int array[], int size) {
    printf("\nFinal Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        
        printf("Step %d: ", step + 1);
        for (int k = 0; k < size; ++k) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
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
    int size, choice;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int data[size];
    
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &data[i]);
    }
    
    printf("\nChoose a sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    printf("\n--- Sorting Process ---\n");
    
    switch (choice) {
        case 1:
            bubbleSort(data, size);
            break;
        case 2:
            selectionSort(data, size);
            break;
        case 3:
            insertionSort(data, size);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    
    printFinalArray(data, size);
    
    return 0;
}