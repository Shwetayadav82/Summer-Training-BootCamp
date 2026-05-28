#include<stdio.h>
int main(){
    int i,j,row ,col;
    scanf("%d%d",&row ,&col);
    int a[row][col], trans[col][row];

    printf("enter the matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose matrix :");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            trans[j][i] = -a[i][j];
        }
    }
    printf("The negation matrix is:-\n ");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf(" %d ",trans[i][j]);
        }
        printf(" \n");
    }

    return 0;
}