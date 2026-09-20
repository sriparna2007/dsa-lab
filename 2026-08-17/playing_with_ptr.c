#include <stdio.h>

int main() {
    int arr[5] = {7, 9, 11, 13, 1};

    printf("--- Array Base Address Concepts ---\n");
    printf("Pf(\"%%p\", arr)      -> %p\n", *arr);
    printf("Pf(\"%%p\", arr)      -> %p\n", (void*)arr);
    printf("Pf(\"%%p\", &arr[0])  -> %p\n", (void*)&arr[0]);
    

    printf("Pf(\"%%d\", arr[0])   -> %d\n", arr[0]);
    
    printf("Pf(\"%%d\", *arr)     -> %d\n", *arr);

    printf("Pf(\"%%d\", *(arr+0)) -> %d\n\n", *(arr + 0));

    printf("Pf(\"%%p\", arr + 1)  -> %p\n", (void*)(arr + 1));

    printf("Pf(\"%%p\", &arr[1])  -> %p\n", (void*)&arr[1]);

    printf("Pf(\"%%d\", *arr + 1) -> %d\n", *arr + 1);

    printf("%d", arr); 

    return 0;
}