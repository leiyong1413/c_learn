#include <stdio.h>

int main()
{
    printf("learn c basic syntax \n");

    /* int和age之间至少有一个空格字符，这样编译器才能识别区分他们。*/
    int age;

    return 0;
}

/*
 * c程序由各种tokens构成，tokens可以是关键字、标识符、常量、字符串值，或者是一个符号
 * 1. 分号是语句结束符。也就是说，每个语句必须以分号结束。
 * 2. 标示符
 *  标识变量、函数，或任何其他用户自定义项目的名称。数字 字母 下划线构成
 *  区分大小写
 *  不能数字开头
 * 3.关键字
 *  3.1 auto	else	long	switch
        break	enum	register	typedef
        case	extern	return	union
        char	float	short	unsigned
        const	for	signed	void
        continue	goto	sizeof	volatile
        default	if	static	while
        do	int	struct	_Packed
        double
    3.2 c99 新增
        _Bool	_Complex	_Imaginary	inline	restrict
    3.3 c11 新增
        _Alignas	_Alignof	_Atomic	_Generic	_Noreturn
        _Static_assert	_Thread_local
 * 4.空格
 *  只包含空格的行，被称为空白行，可能带有注释，C 编译器会完全忽略它
 *  在C中，空格用于描述空白符、制表符、换行符和注释。空格分隔语句的各个部分，让编译器能识别语句中的某个元素（比如 int）在哪里结束，下一个元素在哪里开始
*/
