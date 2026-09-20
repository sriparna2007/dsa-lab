#include <stdio.h>

void printFinalArray(int array[], int size) {
    printf("\nFinal Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void modifiedSelectionSort(int array[], int size) {
    int left = 0;
    int right = size - 1;
    int step = 1;

    while (left < right) {
        int min_idx = left;
        int max_idx = left;

        for (int i = left + 1; i <= right; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
            if (array[i] > array[max_idx]) {
                max_idx = i;
            }
        }

        int temp = array[left];
        array[left] = array[min_idx];
        array[min_idx] = temp;

        if (max_idx == left) {
            max_idx = min_idx;
        }

        temp = array[right];
        array[right] = array[max_idx];
        array[max_idx] = temp;

        printf("Step %d: ", step);
        for (int k = 0; k < size; ++k) {
            printf("%d ", array[k]);
        }
        printf("\n");

        left++;
        right--;
        step++;
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
    modifiedSelectionSort(data, size);
    
    printFinalArray(data, size);
    
    return 0;
}