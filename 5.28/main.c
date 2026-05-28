// 输入 n 个整数，输出最大值、最小值、平均值
#include <stdio.h>

#define ARR_LENTH(arr) (sizeof(arr) / sizeof(*arr)) 

int find_max(int *arr, int lenth);
int find_min(int *arr, int lenth);
double calculate_average(int *arr, int lenth);

int main () {
    int arr[7] = {2, 346, 3453, -2, -123, 0, 234};
    int lenth = ARR_LENTH(arr);

    int max = arr[find_max(arr, lenth)];
    int min = arr[find_min(arr, lenth)];
    double average = calculate_average(arr, lenth);

    printf("maximum: %d\nminimum: %d\naverage: %.2lf\n", max, min, average);
    return 0;
}

int find_min(int *arr, int lenth) {
    int smallest = arr[0];
    int smallest_index = 0;
    for (int i = 0; i < lenth; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

int find_max(int *arr, int lenth) {
    int biggest = arr[0];
    int biggest_index = 0;
    for (int i = 0; i < lenth; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
            biggest_index = i;
        }
    }
    return biggest_index;
}

double calculate_average(int *arr, int lenth) {
    int total = 0;
    for (int i = 0; i < lenth; i++) {
        total += arr[i];
    } 
    return (double) total / lenth;
}