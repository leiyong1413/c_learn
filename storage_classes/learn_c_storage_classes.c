#include <stdio.h>

static int count = 10;

/* 声明函数 */
void call_func();

int main()
{
    printf("learn c storage classes \n");

    /* auto 存储类 */
    {
        int mount;
        auto int month;
    }

    // register 存储类
    {

    }

    /* static 存储类 */
    while(count--)
    {
        call_func();
    }
}

// 定义函数
void call_func()
{
    /* thingy 局部变量 静态存储 只初始化一次 */
    static int thingy=5;
    thingy++;
    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}

/*
 * 存储类：存储类定义 C 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。
 * auto register static extern
 *
 * 1. auto 存储类 是所有局部变量默认的存储类
 *  auto 只能在函数中使用， 即 auto 只能修饰局部变量
 *
 * 2. register 定义存储在寄存器中而不是 RAM 中的局部变量
 *      不能对它应用一元的 '&' 运算符（因为它没有内存位置）
 *      定义 'register' 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制
 *
 * 3. static 存储类
 *      存储类指示编译器在程序的生命周期内保持局部变量的存在，不需要在每次它进入和离开作用域时进行创建和销毁
 *      static 是全局变量的默认存储类
 *
 * 4. extern 存储类
 *      extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
 *      当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用
 *      可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数
 *
 *      extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候
 *
*/
