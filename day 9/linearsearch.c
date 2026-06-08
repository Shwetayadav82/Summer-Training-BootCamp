#include<stdio.h>
int main(){
    int arr[100];
    int i, n, value;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(value == arr[i]) {
            printf("%d found. Congratulations!\n", value);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Better luck next time. %d not found.\n", value);
    }

    return 0;
}