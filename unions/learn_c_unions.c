#include <stdio.h>

#include <string.h>

/* 定义Union Data*/
union UnionData
{
    int i;
    float f;
    char str[20];
};

int main()
{
    printf("learn c union \n");

    /* 定义union 变量*/
    union UnionData data;
    printf("Memory size occupied by data:%d\n", sizeof(data));  /*20字节*/

    /* 初始化数据*/
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "c programming");
    return 0;
}

/*
 * 共用体：在相同的内存位置存储不同的数据类型
 * 1. 定义
 *  union [union tag]
 * {
 *      member definition;
 *      member definition;
 *      ...
 * } [one or more union variables];
 * union tag 是可选的
 * 可以指定一个或多个共用体变量，这是可选的
 * 共用体占用的内存应足够存储共用体中最大的成员
 *
 * 2. 内存长度：结构体变量所占内存长度是各成员占的内存长度之和。每个成员分别占有其自己的内存单元。
      共用体变量所占的内存长度等于最长的成员变量的长度
 * 3. union的常见用法：
 *  3.1 判断机器是大端机还是小端机
 *  3.2 通信中的数据包会用到共用体
*/
