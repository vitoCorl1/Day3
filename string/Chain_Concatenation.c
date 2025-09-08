#include<stdio.h>

int main(){
    char str1[] = "aymane ";
    char str2[] = "elkhadraoui";
    char str3[100];
    int l = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        str3[i] = str1[i]; 
        l = i + 1;
    } 
    for(int j = 0; str2[j] != '\0'; j++){
        str3[l] = str2[j];
        l++;
    }
    printf("%s", str3);
}