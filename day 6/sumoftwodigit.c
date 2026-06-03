#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* tail;
struct node* head=NULL;
void createll(){
  struct node* newnode;

  newnode=(struct node*)malloc(sizeof(struct node));
  int n;
  scanf("%d",&n);
  newnode->data=n;
  newnode->next=NULL;
  //cll
  if(head==NULL){
    head=tail=newnode;
    newnode->next=head;
  }
  else{
    tail->next=newnode;
    tail=newnode;
    newnode->next=head;
  }
}
void display(){
    int count=0;
    struct node* temp=head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
        count++;
    }
    while(temp!=head);
    printf("\n%d",count);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
createll();
    }
    display();
return 0;
}

