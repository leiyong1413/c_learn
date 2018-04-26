#include <stdio.h> /* 标准输入输出 */

int main(){
    /* 格式化输出到屏幕 */
    printf("learn c input output \n");

    /* %f 格式化输出浮点型数据 */
    float f;
    printf("enter a number:");
    scanf("%f", &f);
    printf("value = %f\n", f);

    /* 读取一个字符 */
    int c = getchar();

    /* 输出一个字符到屏幕 */
    putchar(c);

    /* 读取一行字符串 */
    char str[100];
    printf("enter a string:");
    gets_s(str,100);

    puts(str);
    /* 指定 %s、%d、%c、%f 等来输出或读取字符串、整数、字符或浮点数 */

    return 0;
}

/*
 * 1.标准输入 stdin 设备键盘
 * 2.标准输出 stdout 设备屏幕
 * 3.标准错误 stderr 设备屏幕
 * 4.int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数
 * 5.int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符
 * 6.char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF
 * 7.int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout
 * 8.int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入
 * 9.int printf(const char*format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出
*/
