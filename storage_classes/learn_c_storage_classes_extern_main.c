#include <stdio.h>

/* 全局变量 */
int count ;
/* extern 存储 定义 */
extern void write_extern();

int main()
{
   /* 全局变量 */
   count = 5;
   write_extern();
   return 0;
}


/*
 * 编译的方式：gcc learn_c_storage_classes_extern_main.c learn_c_storage_classes_extern_support.c
*/
