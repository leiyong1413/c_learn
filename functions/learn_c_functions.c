#include <stdio.h>

/* 函数的声明 */
int max(int num1, int num2);

int main()
{
    printf("learn c functions \n");

    /* 局部变量定义*/
    int num1 = 10;
    int num2 = 20;

    /*调用函数获取最大值*/
    int ret = max(num1, num2);

    printf("max value of(%d, %d) is: %d\n", num1, num2, ret);

    return 0;
}

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2)
{
   /* 局部变量声明 */
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}


/*
 * 1.每个 C 程序都至少有一个函数，即主函数 main()
 * 2. 函数声明 + 函数定义
 *  函数声明：函数声明告诉编译器函数的名称、返回类型和参数。
 *      在函数声明中，参数的名称并不重要，只有参数的类型是必需的 如 int max(int,int);
 *      使用：当您在一个源文件中定义函数且在另一个文件中调用函数时，函数声明是必需的。在这种情况下，您应该在调用函数的文件顶部声明函数
 *  函数定义：提供了函数的实际主体
 * 3. C 标准库提供了大量的程序可以调用的内置函数
 * 4. 定义函数
 *  return_type function_name( parameter list )
    {
        body of the function
    }
    返回类型：一个函数可以返回一个值。return_type 是函数返回的值的数据类型， 无返回值则类型为void
    函数名称：这是函数的实际名称。函数名和参数列表一起构成了函数签名
    参数：参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数
    函数主体：函数主体包含一组定义函数执行任务的语句
 * 5. 函数参数
 *  实际传入的值，实参。
 *  形参：接受参数值的变量。
 *  两种传递参数的方式：
 *      传值调用: 把参数的实际值复制给函数的形式参数,修改形参，不影响实际参数。
 *      引用调用: 指针传递方式，形参为指向实参地址的指针，当对形参的指向操作时，就相当于对实参本身进行的操作
 *
 *  注意：引用的实质是指针，使用的角度，引用是一个别名， 使用常量指针作为引用的内部实现，可以避开由于指针操作不当带来的内存错误
 *
*/
