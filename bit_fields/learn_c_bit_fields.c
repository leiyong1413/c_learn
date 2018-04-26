#include <stdio.h>

int main(){
    return 0;
}

/*
 * 1.位域是什么？
 * 如果程序的结构中包含多个开关量，只有 TRUE/FALSE 变量如
 * struct
 * {
 *  unsigned int var1;
 *  unsigned int var2;
 * } satus;
 * 如果用8个字节存储，会浪费，使用位域能更好的利用内存空间。指定，变量的宽度，使用的字节数目。
*/
