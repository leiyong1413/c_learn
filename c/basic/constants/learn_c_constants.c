#include <stdio.h>

int main()
{
    printf("learn c constants \n");

    /* 整数常量 */
    const int C_A = 212;  /* 10进制 */
    const int C_B = 07;   /* 8进制 */
    const int C_C = 0xee; /* 16进制 */
    const unsigned int C_D =215u;  /* u 或 U 后缀 表示 无符号数 */
    const long C_E = 1008l;   /* l 或 L 后缀 表示 长整数 */
    const unsigned long C_F = 30ul; /*u 和 l 顺序任意 */

    /* 浮点常量 */
    const float C_J = 3.14;
    const float C_H = 0.233;
    const float C_I = 222e-5;

    /* 字符常量 */
    const char C_CHAR = 'j';
    printf("转义字符\t水平制表符\n");

    /* 字符串常量 */
    const char *C_STRING = "this is string constants";
    printf("字符串常量内容：%s \n", C_STRING);

    /* const 关键字 大写 */
    const int LENGTH = 10;
    const int WIDTH = 5;

    int area = LENGTH *WIDTH;
    printf("面积是：%d\n",area);

    return 0;
}


/*
 * 常量：字面量，程序运行期间不会改变。定义后不能改变。
 * const 关键字：
 *      使用 const 前缀声明指定类型的常量
 *      const type variable = value;
 *      常量一般以大写字母表示
 * 1. 整数常量
 * 2. 浮点常量
 *      浮点常量由整数部分、小数点、小数部分和指数部分组成。可以使用小数形式或者指数形式来表示浮点常量
 *      小数形式表示，必须包含整数部分、小数部分，或同时包含两者。
 *      指数形式表示时， 必须包含小数点、指数，或同时包含两者
 * 3. 字符常量
 *      字符常量是括在单引号中如'x'
 *      转义字符'\t'
 *          \\	\ 字符
            \'	' 字符
            \"	" 字符
            \?	? 字符
            \a	警报铃声
            \b	退格键
            \f	换页符
            \n	换行符
            \r	回车
            \t	水平制表符
            \v	垂直制表符
            \ooo	一到三位的八进制数
            \xhh . . .	一个或多个数字的十六进制数
 * 4. 字符串常量
 *      括在双引号 "" 中.
 * 5. 枚举常量
 *
*/
