#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int i;
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    int hash[256] = {0};

    for(i = 0; str[i] != '\0'; i++) {
        hash[str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++) {
        if(hash[str[i]] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-1");
    
    return 0;
}
