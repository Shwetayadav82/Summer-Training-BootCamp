#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *front =NULL;
struct node *rear =NULL;
// insert a value
void enqueue(){
    int x;
    struct node *newnode;
    //memory allocate
    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the number:-");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL){
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        printf("element inserted succesfully");
    }
}
    //delete a value
void dequeue(){
    struct node* temp;
    if(front==NULL){
        printf("queue is overflow.");
    }
    temp=front;
    front=front->next;
    free(temp);
}
void display(){
struct node* temp;
if(front==NULL){
    printf("queue is empty.");
    return;

}
temp=front;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
    }
}
int main(){
    int choice;
    while(1)
    {
        printf("\nEnter your choice.\n1:enqueue.\n2:dequeue\n3:display\n4:exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:printf("Exiting this code");
            exit(0);
            default:
            printf("invalid input.");
            break;
        }

    }
    return 0;
}