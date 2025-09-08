#include<stdio.h>

int main(){
    char str[] = "aymane";
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a'){
            str[i] -= 32;
        }
    }
    printf("%s", str);
}