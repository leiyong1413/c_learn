#include <stdio.h>

/* 全局变量，在另外一个文件中定义*/
extern int count;

/* 声明 */
void write_extern();

/* 定义 */
void write_extern()
{
    printf("count is %d\n", count);
}
