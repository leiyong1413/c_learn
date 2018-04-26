#include <stdio.h>

int main()
{
    /* 算术运算符 */
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    printf("Line 1 - c 的值是 %d\n", c );
    c = a - b;
    printf("Line 2 - c 的值是 %d\n", c );
    c = a * b;
    printf("Line 3 - c 的值是 %d\n", c );
    c = a / b;
    printf("Line 4 - c 的值是 %d\n", c );
    c = a % b;
    printf("Line 5 - c 的值是 %d\n", c );

    /* 注意++ -- 和赋值的优先级 */
    c = a++;  /* 赋值后再加 1 ，c 为 21，a 为 22 */
    printf("Line 6 - c 的值是 %d\n", c );
    c = a--;  /* 赋值后再减 1 ，c 为 22 ，a 为 21 */
    printf("Line 7 - c 的值是 %d\n", c );

    /* 区别a++ 与++a
     * ++a是先自增再执行表达示,执行表达式时使用的是自增后的a
     * a++是先执行表达式后再自增,执行表达式时使用的是a的原值
    */
    a = 10;
    c = a++;
    printf("先赋值后运算：\n");
    printf("Line 1 - c 的值是 %d\n", c );  // 10
    printf("Line 2 - a 的值是 %d\n", a );  // 11
    a = 10;
    c = a--;
    printf("Line 3 - c 的值是 %d\n", c ); // 10
    printf("Line 4 - a 的值是 %d\n", a ); // 9

    printf("先运算后赋值：\n");
    a = 10;
    c = ++a;
    printf("Line 5 - c 的值是 %d\n", c );  // 11
    printf("Line 6 - a 的值是 %d\n", a );  // 11
    a = 10;
    c = --a;
    printf("Line 7 - c 的值是 %d\n", c );  // 9
    printf("Line 8 - a 的值是 %d\n", a );  // 9

    /* 关系运算 */
    a = 21;
    b = 10;
    if( a == b )
    {
        printf("Line 1 - a 等于 b\n" );
    }
    else{
        printf("Line 1 - a 不等于 b\n" );
    }
    if ( a < b )
    {
        printf("Line 2 - a 小于 b\n" );
    }
    else
    {
        printf("Line 2 - a 不小于 b\n" );
    }
    if ( a > b )
    {
        printf("Line 3 - a 大于 b\n" );
    }
    else
    {
        printf("Line 3 - a 不大于 b\n" );
    }

    /* 改变a b 值 */
    a = 5;
    b = 20;
    if ( a <= b )
    {
        printf("Line 4 - a 小于或等于 b\n" );
    }
    if ( b >= a )
    {
        printf("Line 5 - b 大于或等于 b\n" );
    }


    /* 赋值操作 */
    a = 21;
    c = 0;
    c =  a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );    // 21

    c +=  a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );    // 42

    c -=  a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );    // 21

    c *=  a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );    // 21* 21

    c /=  a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );    // 21 * 21 / 21

    c  = 200;
    c %=  a;
    printf("Line 6 - %= 运算符实例，c 的值 = %d\n", c );    // 200 - 200/21 = 11

    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );   // 44

    c >>=  2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );   // 11

    c &=  2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );    //

    c ^=  2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );

    c |=  2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );

    /*sizeof 运算符*/
    int var_a = 4;
    short var_b;
    double var_c;
    int* ptr;

    printf("Line 1 - 变量 var_a 的大小 = %lu\n", sizeof(var_a) );
    printf("Line 2 - 变量 var_b 的大小 = %lu\n", sizeof(var_b) );
    printf("Line 3 - 变量 var_c 的大小 = %lu\n", sizeof(var_c) );
    printf("Line 4 - 变量 ptr 的大小 = %lu\n", sizeof(ptr) );

    /* 'ptr' 现在包含 'a' 的地址 */
    ptr = &var_a;
    printf("a 的值是 %d\n", var_a);
    printf("*ptr 是 %d\n", *ptr);

    /* 三元运算 */
    var_a = 10;
    var_b = (var_a == 1) ? 20:30;
    printf( "var_b 的值是 %d\n", var_b );

    var_b = (var_a == 10) ? 20: 30;
    printf( "var_b 的值是 %d\n", var_b );


    return 0;
}


/*
 * 运算符 操作符
 * 1. 算术运算符 + - * / %(只适合整数) ++ --
 * 2. 关系运算符 ==  != > < >= <=
 * 3. 逻辑运算符 && || ！
 *      假设变量 A 的值为 1，变量 B 的值为 0
 *      && 如果两个操作数都非零，则条件为真 (A && B) 为假
 *      || 如果两个操作数中有任意一个非零，则条件为真 (A || B) 为真
 *      注意：如果第一表达式为假才会继续判断第二表达式， 如果第一个操作数不为0，那么第二个操作数就不会被求值（例如，判断(p == NULL || p->x == 0)这样的话，就不用担心访问空指针），这一般被称为“短路”
 *      ！ 如果条件为真则逻辑非运算符将使其为假 !(A && B) 为真
 * 4. 位运算符
 *      位运算符作用于位，并逐位执行操作。&、 | 和 ^ 的真值表如下所示
 *      p	q	p & q	p | q	p ^ q
        0	0	0       0       0
        0	1	0       1       1
        1	1	1       1       0
        1	0	0       1       1

 * 5. 赋值运算符
 *      = += -= *= /= %= <<= >>= &= ^= |=
 * 6. 杂项运算符
 *      sizeof() 返回变量的大小 字节数
 *      & 返回变量地址    如 &a 取出变量的地址
 *      * 指向一个变量    如 *a 指向一个变量
 *      ?: 条件表达式     如果条件为真 ? 则值为 X : 否则值为 Y
 * 7. 运算符的优先级
 *      后缀 	() [] -> . ++ - -  	从左到右
        一元 	+ - ! ~ ++ - - (type)* & sizeof 	从右到左
        乘除 	* / % 	从左到右
        加减 	+ - 	从左到右
        移位 	<< >> 	从左到右
        关系 	< <= > >= 	从左到右
        相等 	== != 	从左到右
        位与 AND 	& 	从左到右
        位异或 XOR 	^ 	从左到右
        位或 OR 	| 	从左到右
        逻辑与 AND 	&& 	从左到右
        逻辑或 OR 	|| 	从左到右
        条件 	?: 	从右到左
        赋值 	= += -= *= /= %=>>= <<= &= ^= |= 	从右到左
        逗号 	, 	从左到右
 *
*/
