/*
https://www.runoob.com/cprogramming/c-exercise-example5.html
题目：输入三个整数 x、y、z，请把这三个数由小到大输出。
程序分析：我们想办法把最小的数放到 x 上，先将 x 与 y 进行比较，如果 x > y 则交换 x 与 y 的值，再用同样的方法比较 x 与 z，
如果 x > z 则交换 x 与 z 的值，这样就把最小的数放到了 x 上了。接着再比较 y 与 z，如果 y > z 则交换 y 与 z 的值，
这样就把三个数由小到大输出了。
*/
#include <stdio.h>

int main() {
    int x, y, z, m;
    printf("请输入三个整数");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y) {
        m = y;
        y = x;
        x = m;
    }

    if(y > z) {
        m = z;
        z = y;
        y = m;
    }

    if(x > z) {
        z = m;
        x = z;
        z = m;
    }

    printf("%d, %d, %d", x, y, z);

    return 0;
}