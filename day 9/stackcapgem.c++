#include<stdio.h>
#include<stdlib.h>
#define max 1000
int stack[max];
int top=-1;
void push( int x){
if(top==max-1){
    printf("stack is overflow.");
}
else{
    top++;
    stack[top]=x;
}
}
void pop(){
    if(top==-1){
        printf("staack is underflow.");
    }
    else{
        // printf("%d ",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1){
        printf("stack is empty.");
    }
    else{
        //Direct print the top element of stack
printf("Top element is %d\n ",stack[top]);
    }
}
// display

void display(){
    int i;
    for(i=top;i>=0;i--){
printf("%d ",stack[i]);
    }
    printf("\n ");
}
int main()
{
    int n, i, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push(x);
    }

    display();

    peek(); 

    pop();

    display();

    peek();

    pop();
    return 0;
}