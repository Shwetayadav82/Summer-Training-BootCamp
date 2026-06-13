#include<stdio.h>
int main(){
    int i,n,target;
   printf("enter the number of element:-");
   scanf("%d",&n);
 int arr[n];
 printf("enter sorted array element:-");
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
 printf("enter the target:");
 scanf("%d",&target);
 int starting=0;
 int end=n-1;
 int mid;
 while(starting<=end){

mid=(starting+end)/2;

if(target>arr[mid])
{
   starting=mid+1;
}
else if(target<arr[mid])
{
   end= mid-1 ;
}
else
{
   printf("Index of target is:-%d",mid);
   return 0;
   }
 }

printf("target not found.");
 return 0;
} 
