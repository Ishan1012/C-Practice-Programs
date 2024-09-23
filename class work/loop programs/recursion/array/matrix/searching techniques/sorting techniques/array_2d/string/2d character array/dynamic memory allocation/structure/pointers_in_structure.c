#include<stdio.h>
#include<string.h>

struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct books*);

int main(int argc, char const *argv[])
{
    struct books book1;
    strcpy(book1.title,"Let us C");
    strcpy(book1.author,"Yashwant Kanetkar");
    strcpy(book1.subject,"C Programming");
    book1.book_id = 6495407;

    printBook(&book1);

    return 0;
}

void printBook(struct books *book)
{
    printf("Book title: %s\n",book->title);
    printf("Book author: %s\n",book->author);
    printf("Book subject: %s\n",book->subject);
    printf("Book id: %d\n",book->book_id);
}