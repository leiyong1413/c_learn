#include <stdio.h>

int main()
{
    printf("learn c variables \n");

    /* 变量的声明（定义）*/
    /* 指示编译器创建类型为 int 的名为 i、j、k 的变量 */
    int i, j, k;

    // 初始化
    i = 10;
    j = 20;

    k = i + j;

    printf("value of k:%d \n", k);

    /* 声明并初始化 */
    float d = 3.0, e = 5.0, f;
    f = d / e;
    printf("value of f:%f \n",f);

    return 0;
}

/*
 * 1. 变量：可操作的存储区域的名称。C 中每个变量都有特定的类型，类型决定了变量存储的大小和布局。
 * 2. 变量名： 字母、数字、下划线组成。必须以字母或者下划线开头。大小写敏感。
 * 3. 定义变量：
 *  告诉编译器在何处创建变量的存储，已经如何创建。
 *  type variable_list;
 *  type: 有效的数据类型
 *  variable_list: 变量名列表，由一个或多个标识符名称组成，多个标识符之间用逗号分隔。
 *
 *  未初始化的定义：带有静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），其他就是未定义。
*/
