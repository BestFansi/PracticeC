#include <stdio.h>
int main ()
{
    //1025 = 00000000 00000000 00000100 00000001
    int a = 1025;  /* 实际变量的声明 */
    int *p;        /* 指针变量的声明 */
    p = &a;        /* 在指针变量中存储 a 的地址 */
    printf("a 变量的地址: %p\n", &a);
    printf("整型变量的大小是%dbyte\n", sizeof(int));
    printf("p 变量存储的地址: %p\n", p); /* 在指针变量中存储的地址 */   
    printf("*p 变量的值: %d\n", *p ); /* 使用指针访问值 */
    printf("p+1 变量存储的地址: %p\n", p+1);
    printf("*(p+1) 变量的值: %d\n\n", *(p+1)); /* 使用指针访问值 */

    char *p0;
    /*
    p0 = p; 非法操作（类型不同）
    */
    p0 = (char*)p;
    printf("整型变量的大小是: %dbyte\n", sizeof(char));
    printf("p0 变量存储的地址: %p\n", p0);   
    printf("*p0 变量的值: %d\n", *p0); //00000001
    printf("p0+1 变量存储的地址: %p\n", p0+1);
    printf("*(p0+1) 变量的值: %d\n\n", *(p0+1)); //00000100
    
    void *p1;
    p1 = p; //合法
    printf("p1 变量存储的地址: %p\n", p1);
    //printf("*p1 变量的值: %d\n", *p1); 未映射到任何特定类型
    return 0;
}   