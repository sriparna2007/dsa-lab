#include <stdio.h>

void printFinalArray(int array[], int size) {
    printf("\nFinal Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionDelete(int array[], int *size) {
    int step = 1;
    
    while (*size > 1) {
        int min_idx = 0;

        for (int i = 1; i < *size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }

        for (int i = min_idx; i < *size - 1; i++) {
            array[i] = array[i + 1];
        }

        (*size)--;

        printf("Step %d: ", step++);
        for (int k = 0; k < *size; ++k) {
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
    
    printf("\n--- Deletion Process ---\n");
    
    selectionDelete(data, &size); 
    
    printFinalArray(data, size);
    
    return 0;
}