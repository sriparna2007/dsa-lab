#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    
    int L[n1], M[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++) {
        M[j] = arr[q + 1 + j];
    }
    
    int i = 0, j = 0, k = p;
    
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void printFinalArray(int array[], int size) {
    printf("\nFinal Merged Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size;
    
    printf("Enter the total number of elements: ");
    scanf("%d", &size);
    
    int data[size];
    
    printf("Enter %d integers : ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &data[i]);
    }
    
    int p = 0;
    int r = size - 1;
    int q = p + (r - p) / 2;
    
    merge(data, p, q, r);
    
    printFinalArray(data, size);
    
    return 0;
}