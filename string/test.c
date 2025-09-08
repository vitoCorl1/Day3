#include <stdio.h>
#include <string.h>

int main(){
    char str[10][10] = {"aymane", "aymahassan", "abdol"};
    char str1[] = "ayma";
    for(int i = 0; i < 3 ; i++){
        int ls = strncmp(str[i], str1, strlen(str1));
        if(ls == 0){
            printf("founded match : %s", str[i]);
        }
    }
}