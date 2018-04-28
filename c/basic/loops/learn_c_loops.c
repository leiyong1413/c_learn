#include <stdio.h>

int main()
{
    printf("learn c loops \n");
    return 0;
}

/*
 * 1. 循环的类型
 *  while 循环	当给定条件为真时，重复语句或语句组。它会在执行循环主体之前测试条件
    for 循环	多次执行一个语句序列，简化管理循环变量的代码。
    do...while 循环	除了它是在循环主体结尾测试条件外，其他与 while 语句类似。
    嵌套循环	您可以在 while、for 或 do..while 循环内使用一个或多个循环
 * 2. 循环控制语句
 *  break 语句	终止循环或 switch 语句，程序流将继续执行紧接着循环或 switch 的下一条语句。
    continue 语句	告诉一个循环体立刻停止本次循环迭代，重新开始下次循环迭代
 * 3. 无限循环 条件永远不为假，则循环将变成无限循环
 *  while(1)
 *  {
 *
 *  }
 *
 *  do
 *  {
 *  } while(1);
 *
 *  for(;;)
 *  {
 *
 *  }
 *
*/
