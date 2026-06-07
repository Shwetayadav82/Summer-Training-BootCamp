#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

// Push Operation
void push() {
    int x;
    struct node *newnode;
// allocate memory
    newnode = (struct node *)malloc(sizeof(struct node));
// check if there is space in stack or not 
    if (newnode == NULL) {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &x);

    newnode->data = x;
    newnode->next = top;
    top = newnode;

    printf("%d pushed into stack\n", x);
}

// Pop Operation
void pop() {
    struct node *temp;
// check if stack is empty or not 
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Deleted element: %d\n", top->data);

    top = top->next;
    free(temp);
}

// Peek/ top Operation
void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", top->data);
    }
}

// Display Operation
void display() {
    struct node *temp;

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    temp = top;

    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n0.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 0:
                printf("Program exited\n");
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }
    getchar();
    return 0;
}