#include <stdio.h>

int gcd(int a, int b);
int gcd1(int a, int b);
int gcd2(int a, int b);

int main(int argslen, char *args[])
{
    int a, b;
    printf("type 2 numbers :");
    scanf("%d %d", &a, &b);

    if(a == 0 || b == 0) {
        printf("gcd number : %d \n", 0);
        return 0;
    }

    int x = gcd(a, b);
    printf("gcd number : %d \n", x);

    x = gcd1(a, b);
    printf("gcd1 number : %d \n", x);

    x = gcd2(a, b);
    printf("gcd2 number : %d \n", x);

    return 0;
}

// 方案一 使用循环递减
int gcd(int a, int b)
{
    int i = (a > b ? b : a);
    while (i > 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
        i--;
    }
    return i;
}

// 方案二 使用辗转相减法 递归
int gcd1(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd1(b, a % b);
}

// 方案二 使用辗转相减法 while 循环
int gcd2(int a, int b)
{
    int i = b;
    while (a % b != 0)
    {
        i = a % b;
        a = b;
        b = i;
    }
    return i;
}
