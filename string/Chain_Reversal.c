#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "ebcd";
    int l = strlen(str) - 1;
    char w;
    for(int i = 0; i < l; i++){
        w = str[i];
        str[i] = str[l];
        str[l] = w;
        l--;
    }
    printf("%s", str);
}