#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

struct Book createBook(const char *title, const char *author, int year) {
    struct Book b;
    strcpy(b.title, title);
    strcpy(b.author, author);
    b.year = year;
    return b;   
}

int main() {
    struct Book myBook = createBook("The Birth of Tragedy", "Friedrich Nietzsche", 1872);

    printf("Book Information:\n");
    printf("Title : %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Year  : %d\n", myBook.year);

    return 0;
}
