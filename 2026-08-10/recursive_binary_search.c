#include <stdio.h>

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
    int array[] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
    int n = sizeof(array) / sizeof(array[0]);
    int x;
	
    printf("Enter the number to search in array: ");
    scanf("%d", &x); 
    
    int result = binarySearchRecursive(array, x, 0, n - 1);
    
    if (result == -1) {
        printf("Not found\n");
    } else {
        printf("Found at position: %d\n", result);
    }
    
    return 0;
}