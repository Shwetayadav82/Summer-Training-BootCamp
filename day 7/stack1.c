#include<stdio.h>
#define max 5
int stack[max];
int top=-1;

//funtion 
// push()
// pop()
// top()
// display()

void push(){
    int x;
    printf("enter the element");
    scanf("%d",&x);
    if(top==max-1)
    {
        printf("stack is in overflow condition");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop(){
if(top==-1){
    printf("Stack is underflow.");
}
else{
printf("%d",stack[top]);
top--;
}
}
//peek()or top()

void peek(){
    if(top==-1){
        printf("stack is empty.");
    }
    else{
        //Direct print the top element of stack
printf("%d",stack[top]);
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
printf("%d",stack[i]);
    }
}
int main(){
    while(1){
        printf("\n0.Exit\n1.Push the element\n2.Pop the element\n3.peek the element\n4.Display the element\n");
        int choice;
    scanf("%d", &choice);
     switch(choice){
    case 0:printf("exit the program.");
    break;
    case 1:push();
    break;
     case 2:pop();
    break;
     case 3:peek();
    break;
     case 4:display();
    break;
    default:
    printf("Invalid Choice");
     }
    }   
    return 0;
}