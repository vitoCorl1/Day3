#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "ayne is the best :)";
    char str1[] = "ma";
    for(int i = 0; str[i] != '\0'; i++){
        if(strstr(str, str1) != NULL){
            printf("substence founded ! \n");
            break;
        }else{
            printf("substence not founded !\n");
            break;
        }
    }
}