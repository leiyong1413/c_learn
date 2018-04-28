#include <stdio.h>
#include <string.h>

/* 定义一个结构体*/
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book; /* 结构变量*/

/* 结构体作为参数*/
void printBook(struct Books book);
/* 指向结构的指针*/
void printBookArgPtr(struct Books *pBook);
int main()
{
    printf("learn c structures \n");

    /* 定义结构类型变量*/
    struct Books book1;
    struct Books book2;

    /* book1 初始化*/
    strcpy(book1.title, "c programming");
    strcpy(book1.author, "nuha ali");
    strcpy(book1.subject, "c programming tutorial");
    book1.book_id = 6495407;

    /* book2 初始化*/
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Al");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /* 输出book1信息*/
    printf( "Book 1 title : %s\n", book1.title);
    printf( "Book 1 author : %s\n", book1.author);
    printf( "Book 1 subject : %s\n", book1.subject);
    printf( "Book 1 book_id : %d\n", book1.book_id);

    /* 输出 Book2 信息 */
    printf( "Book 2 title : %s\n", book2.title);
    printf( "Book 2 author : %s\n", book2.author);
    printf( "Book 2 subject : %s\n", book2.subject);
    printf( "Book 2 book_id : %d\n", book2.book_id);

    /* 结构体作为参数 调用 本质上是数据拷贝*/
    printBook(book1);
    printBook(book2);

    /* 结构体作为参数 调用 传递指针*/
    printBookArgPtr(&book1);
    printBookArgPtr(&book2);

    return 0;
}

void printBook(Books book)
{
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
}


void printBookArgPtr(struct Books *pBook)
{
    printf( "Book title : %s\n", pBook->title);
    printf( "Book author : %s\n", pBook->author);
    printf( "Book subject : %s\n", pBook->subject);
    printf( "Book book_id : %d\n", pBook->book_id);
}

/*
 * 1.存储不同类型的数据项
 * 2.定义结构
 *  struct [structure tag]
 *  {
 *      member definition;
 *      member definition;
 *      ...
 *  } [one or more structure variables];
 *  structure tag:可选，结构体类型名字
 *  structure variables: 可选，可以定义一个或多个变量
 * 3.访问结构成员 使用成员访问运算符（.）
 * 4.定义结构类型变量 可以使用 struct 关键字来定义结构类型的变量
*/
