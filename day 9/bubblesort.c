#include<stdio.h>
int main(){
    int n;

    printf("enter the number of element:-");
    scanf("%d",&n);

    float arr[n];
    int i,j;
    float temp;

    printf("enter array element:-");
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:-");
    for(i=0;i<n;i++){
          printf("%.2f ",arr[i]);
    }
return 0;
}