#include <stdio.h>

int main(){
    char buff[50];
    printf("Name: ");
    scanf("%s",buff);
    printf("Hello, %s\n", buff);
    return 0;
}