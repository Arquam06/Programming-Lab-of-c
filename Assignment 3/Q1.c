//C Program to Declare a structure Book with the following members: bookid; bookname; author; price; year; pages; publisher Accept the input of a book and display all the book details

#include <stdio.h>

struct Book
{
    int bookid;
    char bookname[50];
    char author[50];
    float price;
    int year;
    int pages;
    char publisher[50];
};

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookid);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.bookname);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("Enter Publication Year: ");
    scanf("%d", &b.year);

    printf("Enter Number of Pages: ");
    scanf("%d", &b.pages);

    printf("Enter Publisher Name: ");
    scanf(" %[^\n]", b.publisher);

    printf("\n----- Book Details -----\n");

    printf("Book ID       : %d\n", b.bookid);
    printf("Book Name     : %s\n", b.bookname);
    printf("Author        : %s\n", b.author);
    printf("Price         : %.2f\n", b.price);
    printf("Year          : %d\n", b.year);
    printf("Pages         : %d\n", b.pages);
    printf("Publisher     : %s\n", b.publisher);

    return 0;
}