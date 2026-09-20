#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char input[100];
    char original_input[100];

    printf("Enter a data structure name (e.g., Array, Linked List, Tree): ");
    
    if (fgets(input, sizeof(input), stdin) != NULL) {
        input[strcspn(input, "\n")] = 0;
        strcpy(original_input, input);
        toLowerCase(input);

        if (strcmp(input, "array") == 0) {
            printf("%s is a Non-Primitive, Linear, Static data structure.\n", original_input);
        } 
        else if (strcmp(input, "linked list") == 0 || strcmp(input, "linkedlist") == 0) {
            printf("%s is a Non-Primitive, Linear, Dynamic data structure.\n", original_input);
        } 
        else if (strcmp(input, "tree") == 0 || strcmp(input, "graph") == 0) {
            printf("%s is a Non-Primitive, Non-Linear data structure.\n", original_input);
        } 
        else if (strcmp(input, "integer") == 0 || strcmp(input, "int") == 0 || 
                 strcmp(input, "float") == 0 || strcmp(input, "char") == 0) {
            printf("%s is a Primitive data structure.\n", original_input);
        } 
        else {
            printf("Classification for '%s' is not found. Please try standard names like Array, Tree, or Linked List.\n", original_input);
        }
    }
    return 0;
}