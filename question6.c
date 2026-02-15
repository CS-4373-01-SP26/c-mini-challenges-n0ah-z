#include <stdio.h>

void rev(char* string);
void transpos(void(* func)(char*), char* string);

int main(int argc, char **argv){
    char input[50];
    printf("type in word to be reversed: ");
    scanf("%s",input);

    transpos(&rev, input);
}

void transpos(void(* func)(char*), char* string){
    func(string);
}

void rev(char* string){
    printf("%s\n", string);
    char *tmp = string;
    int len = 0;
    while (!(*tmp == '\0')){
        len++;
        tmp = tmp + sizeof(char);
    }

    for(int i = 0; i < len/2; i++){
        char c = string[i];
        string[i] = string[len-i-1];
        string[len-i-1] = c;
    }
    printf("%s\n",string);
}