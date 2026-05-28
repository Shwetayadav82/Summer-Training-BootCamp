#include<stdio.h>

int main() {

    int arr[10];
    int key;
    int freq = 0;
    int i;

    // Input array elements
    printf("Enter 10 elements in the array:\n");

    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input number to find frequency
    printf("\nEnter the number to count frequency: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < 10; i++) {
        if(arr[i] == key) {
            freq++;
        }
    }

    printf("\nFrequency of %d = %d\n", key, freq);

    return 0;
}
