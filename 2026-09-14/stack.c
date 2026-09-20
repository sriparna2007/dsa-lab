#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow");
        return -1;
    } else {
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack Empty");
        return -1;
    }
    return stack[top];
}

void display() {
    if (isEmpty()) {
        printf("Empty");
        return;
    }
    printf("Stack Elements");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Top element = %d", peek());
    printf("popped = %d", pop());
    display();
    return 0;
}