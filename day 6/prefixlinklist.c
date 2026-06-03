#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL, *temp=NULL;
void creation(){
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));

if(newnode==NULL){
    printf("Exit");
    exit(0);
}
// printf("Enter the data:-");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head==NULL){
    head=newnode;
}
else{
    newnode->next=head;
    head=newnode;
    }
}
void prefixdisplay()
{
    int n;
    temp = head;
    while(temp != NULL)
    {  
        n=temp->data;

        if(n/10 == 100) {
            temp = temp->next;
        }
        else
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        

    }
}
int main(){
    int i,n;
    printf("Enter the size of linklist:-");
    scanf("%d",&n); 
    for(i=0;i<n;i++){
        creation();
    }
    prefixdisplay();
    return 0;
}
