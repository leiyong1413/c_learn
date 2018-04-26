#include <stdio.h>
#include <float.h>

int main()
{
    printf("learn c data types \n");

    /* mac os 64 int4字节数
     * %lu 为 32 位无符号整数
    */
    printf("int size:%lu \n", sizeof(int));

    printf("float size 字节数: %lu \n", sizeof(float));
    /* %E 为以指数形式输出单、双精度实数 */
    printf("float 最小值:%E \n", FLT_MIN);
    printf("float 最大值:%E \n", FLT_MAX);
    printf("floa 精度:%d \n", FLT_DIG);

    return 0;
}

/*
 * 通过数据类型声明不同的变量或函数。
 * 变量的类型决定了变量的存储空间
 * 1.基本类型：整数和浮点
 *  1.1 整数类型
 *  char	1 字节	-128 到 127 或 0 到 255
    unsigned char	1 字节	0 到 255
    signed char	1 字节	-128 到 127
    int	2 或 4 字节	-32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647
    unsigned int	2 或 4 字节	0 到 65,535 或 0 到 4,294,967,295
    short	2 字节	-32,768 到 32,767
    unsigned short	2 字节	0 到 65,535
    long	4 字节	-2,147,483,648 到 2,147,483,647
    unsigned long	4 字节	0 到 4,294,967,295

    存储大小与系统位数有关，目前通用是64位。
    64位系统中通常各种long类型与32位有出入， 各种int都是4字节
    使用函数 sizeof(type) 得到对象或类型的存储字节大小。
    1.2 浮点数
        float 4字节 1个字节8位 （单精度浮点值。单精度是这样的格式，1位符号，8位指数，23位小数。）
        double 8字节  （双精度 双精度是1位符号，11位指数，52位小数）
        long double 16 字节
        在头文件 float.h中定义
 * 2.枚举类型
 * 3.void 类型： void 表明没有可用的值
 *  3.1 函数返回为空
 *      C 中有各种函数都不返回值，或者您可以说它们返回空。不返回值的函数的返回类型为空
 *      void exit(int status);
 *  3.2 函数参数为空
 *      int rand(void);
 *  3.3 指针指向void
 *      类型为 void * 的指针代表对象的地址，而不是类型。例如，内存分配函数 void *malloc( size_t size ); 返回指向 void 的指针，可以转换为任何数据类型
 * 4.派生类型：指针类型、数组类型、结构类型、共用体类型、函数类型
*/
