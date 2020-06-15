
#include <stdio.h>

void min(int a, int b);
void gcd(int a, int b);
int gcd2(int a, int b);
void max(int a, int b);

void sxh();

int main(int argslen, char *args[])
{
    // int a, b;
    // printf("type 2 numbers :");
    // scanf("%d %d", &a, &b);
    // gcd(a, b);
    // int x = gcd2(a, b);
    // printf("gcd2 : %d \n", x);
    // min(a, b);
    // max(a, b);

    sxh();

    return 0;
}

void sxh()
{
    int i = 100;
    while (i < 1000)
    {
        int temp = i;
        int x = temp % 10;
        temp /= 10;
        int y = temp % 10;
        temp /= 10;
        int z = temp % 10;
        
        if (i == ((x * x * x) + (y * y * y) + (z * z * z)))
        {
            printf("%d  ", i);
        }
        i++;
    }
}

int gcd2(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd2(b, a % b);
}

void gcd(int a, int b)
{
    int i = b;
    while (a % b != 0)
    {
        i = a % b;
        a = b;
        b = i;
    }
    printf("gcd : %d \n", i);
}

void min(int a, int b)
{
    int j = (a > b ? a : b);
    while (1)
    {
        if (j % a == 0 && j % b == 0)
        {
            break;
        }
        j++;
    }

    printf("min : %d \n", j);
}

void max(int a, int b)
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

    printf("max : %d \n", i);
}