//pointers as function arguments - call by reference
//传引用可以节省很多内存空间
//指针作为函数参数
#include <stdio.h>
void increment(int *p) {
    *p = *p + 1;
} 
int main() {
    int a;//局部变量
    a = 10;
    increment(&a);
    printf("a = %d\n", a);
    return 0;
}