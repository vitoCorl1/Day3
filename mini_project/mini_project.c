#include<stdio.h>
#include <string.h>

struct contact {
    char Name[10][100];
    char Number[15][100];
    char E_mail[30][100];
};

int Add_Contact(int count){
    struct contact book;
    if (count >= 100) {
        printf("Book contact storage is full!\n");
        return count;
    }

    printf("____________ Add contact ______________\n");
    printf("Enter contact Name           : ");
    scanf("%s", book.Name[count]);

    printf("Enter contact phone number   : ");
    scanf("%s", book.Number[count]);

    printf("Enter contact E-mail address : ");
    scanf("%s", book.E_mail[count]);

    printf("Book added succefully !\n");
    printf("____________________________________\n");

    count++;
    return count;
}

void Show_Contacts(int count){
    struct contact data;

    if (count == 0) {
        printf("No contact available.\n");
        return;
    }

    printf("\n_________________ View contacts ____________________\n");
    for (int i = 0; i < count; i++) {
        printf("----------------------%d-----------------------\n", i + 1);
        printf("name : %s\nnumber : %s\nE-mail address :  %s\n", data.Name[i], data.Number[i], data.E_mail[i]);
    }
    printf("\n_____________________________________________________\n");    
}

void Edit_Contact(int count){
    struct contact data;

    if(count == 0){
        printf("No contact available.\n");
        return;
    }

    printf("\n_________________ View contacts ____________________\n");
    for (int i = 0; i < count; i++) {
        printf("----------------------------- %d ---------------------------\n", i + 1);
        printf("name : %s\nnumber : %s\nE-mail address :  %s\n", data.Name[i], data.Number[i], data.E_mail[i]);
    }
    printf("\n_____________________________________________________\n"); 

    int edit;

    printf("Enter number of contact u want ot edit : ");
    scanf("%d", &edit);
    edit--;
    
    char edited_name[10];
    printf("Enter edited name : ");
    scanf("%s", edited_name);
    strcpy(data.Name[edit], edited_name);
    
    char edited_number[15];
    printf("Enter edited phone number : ");
    scanf("%s", edited_number);
    strcpy(data.Number[edit], edited_number);

    char edited_E_mail[30];
    printf("Enter edited E_mail : ");
    scanf("%s", edited_E_mail);
    strcpy(data.E_mail[edit], edited_E_mail);
}

int Delete_Contact(int count){
    struct contact data;
    if (count == 0) {
        printf("No contact available.\n");
        return 0; 
    }
    printf("\n___________________ Delete contacts ____________________\n");
    printf("\n------------------ Available contacts ------------------\n");
    
    int D_contact = 0;
    printf("Enter contact number to delete : ");
    scanf("%d", &D_contact);
    
    for(int i = D_contact; i > 0; i--){
        strcpy(data.Name[i - 1], data.Name[i]);
    }
    printf("contact deleted succesfully !");
    printf("\n--------------------------------------------------------\n");
    printf("\n________________________________________________________\n");
    count--;
    return count;
}

void Search_Contact(int count){
    struct contact data;
    if (count == 0) {
        printf("No contact available.\n");
        return; 
    }
    printf("\n___________________ Search contacts ____________________\n");
    printf("\n------------------ Available contacts ------------------\n");
    
    char S_contact[10];
    printf("Enter name to Search : ");
    scanf("%s", S_contact);
    
    for(int i = 0; i < count; i++){
        if(strncmp(data.Name[i], S_contact, strlen(S_contact)) == 0){
            printf("founded : %s", data.Name[i]);
        }
    }

    printf("\n--------------------------------------------------------\n");
    printf("\n________________________________________________________\n");
}

int main(){
    int choise;
    int count = 0;
    int l = 1;
    while(l){
        printf("\n/////////////////// Menu contact book /////////////////\n");
        printf("///////////////// 1 . Add a Contact. /////////////////\n");
        printf("//////////////// 2 . Edit a Contact. /////////////////\n");
        printf("/////////////// 3 . Delete a Contact. ////////////////\n");
        printf("////////////// 4 . Show All Contacts. ////////////////\n");
        printf("///////////// 5 . Search for a Contact. //////////////\n");
        printf("///////////////////// 0 . Quit. //////////////////////\n");
        printf("//////////////////////////////////////////////////////\n");
        
        printf("Enter your choise : ");
        scanf("%d", &choise);

        if(choise < 0 || choise > 7){
            printf("\nwrong try (0 - 6) !\n");
        }

        switch(choise) {
            case 1:
                count = Add_Contact(count);
                break;
            case 2:
                Edit_Contact(count);
                break;
            case 3:
                count = Delete_Contact(count);
                break;
            case 4:
                Show_Contacts(count);
                break;
            case 5:
                Search_Contact(count);
                break;
            case 6:
                l = 0;
                break;
        }
    }
}