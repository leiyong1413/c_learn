#include <stdio.h>
#include <string.h>

typedef struct BOOKS
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Books,*PBooks; /* 这里Books是别名，不是变量*/

#define TRURE 1
#define FALSE 0

int main(){
    printf("learn c typedef \n");
    typedef unsigned char BYTE;
    BYTE b1, b2;

    /*定义一本书*/
    Books book;
    strcpy(book.title, "c programming");
    strcpy(book.author, "leiyong");
    strcpy(book.subject, "c programming");
    book.book_id = 12345;

    printf( "书标题 : %s\n", book.title);
    printf( "书作者 : %s\n", book.author);
    printf( "书类目 : %s\n", book.subject);
    printf( "书 ID : %d\n", book.book_id);

    printf( "TRUE 的值: %d\n", TRUE);
    printf( "FALSE 的值: %d\n", FALSE);

    return 0;
}

/*
 * 1.使用typedef 关键字，为类型取一个新的名字。
 * 如：typedef unsigned char BYTE;
 * 2.按照惯例，定义时会大写字母，以便提醒用户类型名称是一个象征性的缩写。
 * 3.#define 和typedef 的区别：
 *  3.1 #define可以使用其他类型说明符对宏类型名进行扩展
 *  3.2 在连续定义几个变量的时候，typedef 能够保证定义的所有变量均为同一类型
 *  typedef int * PTR_INT;
 *  PTR_INT p1, p2; p1、p2 类型相同，它们都是指向 int 类型的指针
*/
