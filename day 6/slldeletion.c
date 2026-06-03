#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL,*temp=NULL;
void createsll(){
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL){
    printf("empty");
    exit(0);
}
//taking input form the user for a data
else{
    // printf("enter the data:-");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

    if(head==NULL){
        head=newnode;
        temp=head;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
//display
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp-> data);
        temp=temp->next;
    }
}


void del_for_beg()
{
    if(head == NULL)
    {
        printf("empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
}
int main()
{
    int n, i;
    int choice;

    while(1){
        printf("\n0.Exit\n1.Create\n2.Display\n3.Delete\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 0: 
            printf("Exit");
            exit(0);
        case 1:
            printf("Enter the size of linked list: ");
            scanf("%d ", &n);

            for(i = 0; i < n; i++)
            
            {
              createsll();  
            }
             display();  
            break;

        case 2:
            printf("Displaying linked list\n");
            display();
            break;
        case 3:     
            printf("Delete linked list\n");
            del_for_beg();
            break;

        default:
            printf("Invalid Choice");
    }
    }
    
}




