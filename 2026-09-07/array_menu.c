#include <stdio.h>

// ---------------------------------------------------------
// Functions from Program 1 (Quick Sort & Bubble Sort Pass)
// ---------------------------------------------------------

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void printFinalArray(int array[], int size) {
    printf("Final Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void singlePassBubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] > array[i + 1]) {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]); 
        }
    }
    swap(&array[i + 1], &array[high]);
    
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}


// ---------------------------------------------------------
// Functions from Program 2 (Insertion Sort & Binary Search)
// ---------------------------------------------------------

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

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


// ---------------------------------------------------------
// Main Menu Driver
// ---------------------------------------------------------

int main() {
    int choice;

    do {
        printf("\n=========================================\n");
        printf("           ARRAY OPERATIONS MENU           \n");
        printf("=========================================\n");
        printf("1. Single Pass Bubble Sort + Quick Sort\n");
        printf("2. Insertion Sort + Binary Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int n;
                printf("\n--- Bubble Sort + Quick Sort Program ---\n");
                printf("Enter the number of elements: ");
                scanf("%d", &n);

                int array[n];
                printf("Enter %d elements: ", n);
                for (int i = 0; i < n; i++) {
                    scanf("%d", &array[i]);
                }

                printf("\nOriginal Array: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");

                singlePassBubbleSort(array, n);

                printf("Intermediate Array (After 1 pass): ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n\n");

                quickSort(array, 0, n - 1);
                printFinalArray(array, n);
                break;
            }

            case 2: {
                int n, target;
                printf("\n--- Insertion Sort & Binary Search Program ---\n");
                printf("Enter the number of elements: ");
                scanf("%d", &n);

                int arr[n];
                printf("Enter %d elements: ", n);
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("Enter the target element to search: ");
                scanf("%d", &target);

                printf("\nOriginal Unsorted Array: ");
                for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");

                insertionSort(arr, n);

                printf("Sorted Array: ");
                for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");

                int result = binarySearchRecursive(arr, target, 0, n - 1);
                
                if (result != -1)
                    printf("Element %d found at index %d\n", target, result);
                else
                    printf("Element %d not found\n", target);
                break;
            }

            case 3:
                printf("\nExiting program... Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}