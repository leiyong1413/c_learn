#include <stdio.h>
#include <string.h> /*字符串处理相关函数*/

int main()
{
    printf("learn c strings \n");

    /* 初始化一个字符串
    * 注意结尾字符 '\0' 包含在字符串中
    */
    char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    /* 常规初始化方式
     * 您不需要把 null 字符放在字符串常量的末尾
     * C 编译器会在初始化数组时，自动把 '\0' 放在字符串的末尾
    */
    char greeting2[] = "Hello";

    printf("sizeof greeting1 = %lu and greeting2=%lu \n", sizeof(greeting1),sizeof(greeting2));   // 都是6个字节

    /*字符串的各种函数*/
    char str1[12] = "Hello";    // 6个有效字节 后续为空
    char str2[12] = "World";    // 6个有效字节 后续为空
    char str3[12];  // 12个字节

    /*字符串长度 实际字符数 不包括空字符 */
    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);
    printf("strlen(str1) :  %d strlen(str2) :  %d\n", len_str1, len_str2);

    /* 复制 str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );

    /* 连接 str1 和 str2 */
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s sizeof(str1) = %lu \n", str1 , sizeof(str1));

    /* 连接后，str1 的总长度 */
    int len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );
    return 0;
}


/* 字符串链接函数的实现
 * 1. const 修饰：str2源字符串参数用const修饰，防止修改源字符串
*/
char *my_strcat(char *str1, const char* str2)
{
    /*判断有效性*/
    if((str1==NULL)||(str2==NULL))
        return NULL;

    /**/
}

/* 字符串拷贝*/
char *my_strcpy(char* str1, const char* str2)
{
    /*判断有效性*/
    if((str1==NULL)||(str2==NULL))
        return NULL;

    /* 用ret来表示首指针 由于目的指针str1已经在进行移动了，所以用辅助指针ret表明首指针*/
    char *ret = str1; //[1]

    /*循环赋值 遇到'\0'将会停止 注意这里++的先后顺序*/
    while ((*str1++=*str2++)!='\0');

    /* 返回首地址 */
    return ret;
}

/*
 *  1. 字符串:在 C 语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组
 *  2. 字符串操作函数:
        2.1 strcmp: string compare      字符串比较
            strcmp(s1, s2);
            如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0
        2.2 strcat: string catenate     字符串链接
            strcat(s1, s2);
            连接字符串 s2 到字符串 s1 的末尾
        2.3 strcpy: string copy         字符串拷贝
            strcpy(s1, s2);
            复制字符串 s2 到字符串 s1
        2.4 strlen: string length       字符串长度
            strlen(s1);
            返回字符串 s1 的长度
        2.5 strlwr: string lowercase    字符串转小写
        2.6 strupr: string upercase     字符串转大写
*/
