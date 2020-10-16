#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int a, b;
    int result;
    printf("2つの正整数を入力してください\n");
    scanf("%d%d", &a, &b);

    result = gcd(a, b);
    printf("最大公約数 : %d\n", result);

    return 0;
}

int gcd(int a, int b)
{

    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    if (a < b)
        gcd(a, b - a);
}