/*
古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。
*/
#include <stdio.h>
#include <math.h>
int main() {
    int rabbit = 1, a=1, b=1, month;
    printf("月1兔子数：1\n");
    printf("月2兔子数：1\n");
    for(month = 3; month < 41; month++) {
        rabbit = a + b;
        printf("月%d兔子数：%d\n", month, rabbit * 2);
        a = b;
        b = rabbit;
    }
    return 0;
}