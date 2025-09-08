#include<stdio.h>

int main(){
    char str[] = "test";
    int lenght = 0;
    for(int i = 0; str[i] != '\0'; i++){
        lenght = i + 1;
    }
    printf("%d", lenght);
}