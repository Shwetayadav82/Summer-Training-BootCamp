#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;
void push(){
    int x;
    printf("Enter data");
    scanf("%d",&x);
    if (top==MAX-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}
int main(){
    int n,i;
    printf("Enter size of element:-");
    scanf("%d",&n);
     if(n > MAX)
    {
        printf("Stack can hold only %d elements\n", MAX);
        return 0;
    }
    for(i=0;i<n;i++){
       push();
    }
    display();
    return 0;
    
}