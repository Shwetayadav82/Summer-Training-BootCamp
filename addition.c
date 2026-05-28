#include<stdio.h>
int main(){
    int i,j,row,col;
   

    printf("enter row and column :-");
    scanf("%d%d",&row,&col);
    int a[row][col], b[row][col],c[row][col];

    printf("enter the element of 1st matrix:-\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }2
    // for printing of  1st matrix
    /* printf("First Matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } */
    printf("enter the element of 2nd matrix:-\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
        //for printing of 2nd matrix
     /*    printf("Second Matrix: \n");
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                printf("%d ",b[i][j]);
            }
            printf("\n");
        } */
    //addition of a matrix and b matrix in c matrix
    printf("The additionn of matrix is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            c[i][j]=a[i][j]+b[i][j];
          printf("%d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}