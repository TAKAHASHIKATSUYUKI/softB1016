#include <stdio.h>

int factorial(int);

int main(void)
{
    int n;
    int result;

    printf("正の整数nを入力してください\n");
    scanf("%d", &n);
    result = factorial(n);
    printf("%d!=%d\n", n, result);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}