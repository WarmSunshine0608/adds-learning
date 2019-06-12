#include <stdio.h>
/*
gcc -o helloworld.exe helloworld.c 生成helloworld.exe可执行文件
gcc -c helloworld.c 生成helloworld.o 二进制文件
gcc -S helloworld.c 生成helloworld.s 汇编代码文件
 */
int main()
{
    printf("hello world\n");
    printf("hello world");
}