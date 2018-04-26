#include <stdio.h>

int main()
{
    printf("learn c decision making \n");

    int num = 0;
    printf("输入一个整数数字 : ");

    /* 输入是否是整数 */
    int is_int_num_inut = 0;
    do{
        /* 输入 */
        scanf("%d",&num);

        /* 判断num是否是整数数字 */
        is_int_num_inut = num - (int)num;
        if(is_int_num_inut != 0)
        {
            printf("输入不是数字，请重新输入一个整数数字: \n");
        }
    }while(is_int_num_inut != 0);

    /* 三元运算 */
    (num%2==0) ? printf("数字%d是偶数 \n", num) : printf("数字%d是奇数 \n", num);

    return 0;
}


/*
 * 1. 条件的true，false:
 *  C 语言把任何非零和非空的值假定为 true，把零或 null 假定为 false 在C语言标准(C89)没有定义布尔类型
 * 2. 判断语句
 *  if 语句  一个 if 语句 由一个布尔表达式后跟一个或多个语句组成
 *  if...else 语句	一个 if 语句 后可跟一个可选的 else 语句，else 语句在布尔表达式为假时执行
 *  嵌套 if 语句	您可以在一个 if 或 else if 语句内使用另一个 if 或 else if 语句
 *  switch 语句	一个 switch 语句允许测试一个变量等于多个值时的情况
 *  嵌套 switch 语句	您可以在一个 switch 语句内使用另一个 switch 语句
 * 3. ?: 运算符(三元运算符)
 *  Exp1 ? Exp2 : Exp3; 其中，Exp1、Exp2 和 Exp3 是表达式。请注意，冒号的使用和位置
 *
 *
*/
