#include <stdio.h>
//simple stack implementation
#define MAX_SIZE 101
int A[MAX_SIZE];

int top = -1; // global top of stack

void Push(int x) {
    if (top == MAX_SIZE - 1) { // if stack is full
        printf("Stack is full\n");
        return; // return without pushing
    }
    A[++top] = x; // push x onto stack
}

void Pop() {
    if (top == -1) { // if stack is empty
        printf("Stack is empty\n");
        return; // return without popping
    }
   top--; // pop top of stack
}

int Peek() {
    if (top == -1) { // if stack is empty
        printf("Stack is empty\n");
        return -1; // return -1
    }
    return A[top]; // return top of stack
}

void Print() {
    if (top == -1) { // if stack is empty
        printf("Stack is empty\n");
        return; // return without printing
    }
    for (int i = 0; i <= top; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Push(15); Print();
    Pop(); Print();
    Push(20); Print();

}