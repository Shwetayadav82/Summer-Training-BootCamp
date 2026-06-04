#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
// enqueue 
void enqueue(){
    int x;
    printf("enter data:");
    scanf("%d",&x);
    if(rear==max-1){
        printf("Queue is overflow");
    }
    else if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
// dequeue function
//step1:- chekc overflow condition front==rear==-1
//step2:-if front or rear are at same position then set as front and rear as -1.
//step3:-front++ becz front and rear are at different position
void dequeue()
{
if(front==-1 && rear==-1)
{
    printf("underflow condition");
}
else if(front==rear)
{
    front=rear=-1;
}
else
{
    printf("%d",queue[front]);
    front++;
}
}
void top(){
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else{
        printf("The top element are:- %d",queue[front]);
    }
}
void display()
{
    int i;
     printf("Element are:-");
   for(i = front; i <= rear; i++){
    printf("%d ", queue[i]);
}
}
int main(){
    int choice;
    while(1){
        printf("\nEnter your choice.\n1:enqueue.\n2:dequeue\n3:top\n4:display\n5:exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:top();
            break;
            case 4:display();
            break;
            case 5:
            printf("Exiting this code");
            exit(0);
            break;
            default:
            printf("invalid input.");
            break;
        }

    }
    return 0;
}