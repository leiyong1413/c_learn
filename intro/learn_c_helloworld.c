// #include 是一个预处理命令，用来引入头文件
#include <stdio.h>  // 标准输入输出头文件

/*
 * main函数
 * 所有c程序都需要main函数，有且只有一个，是程序的入口，代码从main开始执行
*/
int main()
{
    /* 我是块注释*/
    /* 格式化输出到屏幕 */
    printf("learn c introduce \n");
    printf("hello, world! \n");

    // 表示退出程序
    return 0;
}


// c文件的扩展名 .c

/*
 * 程序的基本结构
 * 1. 预处理指令 如 #incldue
 * 2. 函数
 * 3. 变量
 * 4. 语句 表达式
 * 5. 注释 c标准只有块注释方式
*/

/*
 * 编译和执行c程序
 *  1. 编辑和保存文件
 *  2. gcc learn_c_helloworld.c
 *  3. 如果代码中没有错误，命令提示符会跳到下一行，并生成 a.out 可执行文件
 *  4. 执行 ./a.out 文件 将看到输出结果
*/
