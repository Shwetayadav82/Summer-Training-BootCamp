#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL, *temp=NULL;
void createsll(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
    printf("empty");
    exit(0);
}

// printf("enter the data \n");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head==NULL){
    head=newnode;
    temp=head;
}
else{
    temp->next=newnode;
    temp=newnode;
}
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("\n%d",temp->data);
    temp=temp->next;
    }
}
int main(){
    int n,i;
    printf("Enter size you want to enter in linklist:-");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        //calling function 
       createsll(); 
    }
    display();

}
