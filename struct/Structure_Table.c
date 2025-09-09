#include<stdio.h>

struct student {
    char first_name[10];
    char last_name[20];
    int grade[5];
};

int main(){
    struct student data;
    
    printf("Enter ur first name : ");
    scanf("%s", data.first_name);

    printf("Enter ur last name : ");
    scanf("%s", data.last_name);

    for(int i = 0; i < 5; i++){
        printf("Enetr ur %d grade : ", i + 1);
        scanf("%d", &data.grade[i]);
    }

    printf("first name : %s", data.first_name);
    printf("last name : %s", data.last_name);
    
    for(int i = 0; i < 5; i++){
        printf("\nur %d grade : %d\n", i + 1, data.grade[i]);
    }
}