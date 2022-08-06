#include <stdio.h>
#include <stdlib.h>
//stack implementation with linked list
#define MAX_SIZE 101

struct Node {
    int data;
    struct Node *link;
};

struct Node *top = NULL; //represents the top of the stack. global variable

void Push(int x) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));//create a new node
    temp->data = x; //assign input data to the new node
    temp->link = top; //assign the new node to the top of the stack
    top = temp; //make the new node the top of the stack
}

void Pop() {
    struct Node *temp; //create a temp node to store the top of the stack
    if (top == NULL) return; //if the stack is empty, return without popping
    temp = top; //store the top of the stack in temp
    top = top->link; //make the next node the top of the stack
    free(temp); //delete the temp node
}

void Print() {
    struct Node *temp = top; //create a temp node to store the top of the stack
    if (temp == NULL) { //if the stack is empty, return without printing
        printf("Stack is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main () {
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Push(15); Print();
    Pop(); Print();
    Push(20); Print();
}