/*
https://www.runoob.com/cprogramming/c-exercise-example4.html
题目：输入某年某月某日，判断这一天是这一年的第几天？
程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
*/

#include <stdio.h>

int is_Leap_Year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int year, month, day;
    int month_Days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;

    printf("请输入年月日（格式：年 月 日）：");
    scanf("%d %d %d", &year, &month, &day);

    if (is_Leap_Year(year)) {
        month_Days[1] = 29;
    }

    for (int i = 0; i < month - 1; i++) {
        total += month_Days[i];
    }
    total += day;
    printf("这是这一年的第%d天。\n", total);
}