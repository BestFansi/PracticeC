//pointer to pointer
#include <stdio.h>
//解引用(Dereference): 读取这个指针里面存的地址，然后去那个地址的房间里看看装了什么东西
int main() {
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p); //6
    //*q等于直接写p
    printf("%d\n", *q); //value of p
    //**q = *p = x = 6
    printf("%d\n", *(*q)); //顺腾摸瓜找两次：第一次（*q），第二次（再加一个*）
    printf("%d\n",*(*r));
    printf("%d\n", ***r);
    ***r = 10;
    printf("%d\n", x);
    **q =  *p + 2;
    printf("%d\n", x);
    return 0;
}