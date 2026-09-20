#include <stdio.h>

int getRowMajorAddress(int B, int W, int I, int J, int LR, int LC, int N) {
    return B + W * ((I - LR) * N + (J - LC));
}

int getColumnMajorAddress(int B, int W, int I, int J, int LR, int LC, int M) {
    return B + W * ((J - LC) * M + (I - LR));
}

int main() {
    int B, M, N, LR, LC, I, J;

    int W = sizeof(int); 

    printf("--- DSA Array Mathematics Calculator ---\n\n");

    printf("Enter Base Address (B): ");
    scanf("%d", &B);

    printf("Enter Total Rows (M): ");
    scanf("%d", &M);

    printf("Enter Total Columns (N): ");
    scanf("%d", &N);

    printf("Enter Lowest Row Index (LR, usually 0 or 1): ");
    scanf("%d", &LR);

    printf("Enter Lowest Column Index (LC, usually 0 or 1): ");
    scanf("%d", &LC);

    printf("Enter Target Row to find (I): ");
    scanf("%d", &I);

    printf("Enter Target Column to find (J): ");
    scanf("%d", &J);

    printf("\n--- Results ---\n");
    printf("Array: int arr[%d][%d]\n", M, N);
    printf("Finding Address for: arr[%d][%d]\n", I, J);
    printf("Base Address (B): %d | Width (W): %d bytes\n\n", B, W);

    int rowMajorAddr = getRowMajorAddress(B, W, I, J, LR, LC, N);
    printf("Row-Major Address calculation:\n");
    printf("Formula: B + W * ((I - LR) * N + (J - LC))\n");
    printf("Result:  %d\n", rowMajorAddr); 
    
    printf("-----------------------------------\n");

    int colMajorAddr = getColumnMajorAddress(B, W, I, J, LR, LC, M);
    printf("Column-Major Address calculation:\n");
    printf("Formula: B + W * ((J - LC) * M + (I - LR))\n");
    printf("Result:  %d\n", colMajorAddr); 

    return 0;
}