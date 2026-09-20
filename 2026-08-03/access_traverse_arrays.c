#include <stdio.h>

void access1D(int arr[], int size) {
    int index1D;
    printf("--- 1D Array Access ---\n");
    printf("The 1D array has %d elements (indices 0 to %d).\n", size, size - 1);
    printf("Enter the index you want to access: ");
    scanf("%d", &index1D);

    if (index1D >= 0 && index1D < size) {
        printf("Value at arr[%d] is: %d\n", index1D, arr[index1D]);
    } else {
        printf("Error: Index out of bounds! Please enter a number between 0 and %d.\n", size - 1);
    }
    printf("\n");
}

// Note: When passing 2D arrays to functions in C, the number of columns must be specified.
void access2D(int arr[][4], int rows, int cols) {
    int row, col;
    printf("--- 2D Array Access ---\n");
    printf("The 2D array has %d rows (0-%d) and %d columns (0-%d).\n", rows, rows - 1, cols, cols - 1);
    
    printf("Enter the row index: ");
    scanf("%d", &row);
    
    printf("Enter the column index: ");
    scanf("%d", &col);

    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        printf("Value at arr[%d][%d] is: %d\n", row, col, arr[row][col]);
    } else {
        printf("Error: Index out of bounds!\n");
    }
    printf("\n");
}

void traverse1D(int arr[], int size) {
    printf("--- 1D Array Traversal ---\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}

void traverse2D(int arr[][4], int rows, int cols) {
    printf("--- 2D Array Traversal ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] = %-3d  ", i, j, arr[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
}

int main() {

    int arr1D[5] = {10, 20, 30, 40, 50};
    int size1D = sizeof(arr1D) / sizeof(arr1D[0]);

    int arr2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;
    int cols = 4;

    access1D(arr1D, size1D);
    access2D(arr2D, rows, cols);
    
    traverse1D(arr1D, size1D);
    traverse2D(arr2D, rows, cols);

    return 0;
}