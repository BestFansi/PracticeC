//recursion practice

#include <stdio.h>

int factorial(int n);
int sum(int n);
int fib(int n);

int main() {
    int n;

    printf("Please enter the number: ");
    scanf("%d", &n);

    int res1 = factorial(n);
    int res2 = sum(n);
    int res3 = fib(n);

    printf("\nThe factorial of %d is %d\n", n, res1);
    printf("1 + 2 + ... + %d = %d\n", n, res2);
    printf("The %d th digit of the Fibonacci sequence is %d\n", n, res3);

    return 0;
}

//1. 阶乘
int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

//2. 1 + 2 + ... + n
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

//3. 斐波那契数列的第n个数字
int fib(int n){
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}