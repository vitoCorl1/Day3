#include<stdio.h>

struct definition {
    char name[10];
    char first_name[20];
    int age;
};

int main(){
    struct definition variable;

    printf("Enter ur name : ");
    scanf("%s", variable.name);

    printf("Enter ur first name : ");
    scanf("%s", variable.first_name);

    printf("Enter ur age : ");
    scanf("%d", &variable.age);

    printf("ur name is : %s", variable.name);
    printf("ur first name is : %s", variable.first_name);
    printf("ur age is : %d", variable.age);
}