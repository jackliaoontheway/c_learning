
#include <stdio.h>

void lcm(int a, int b);

int main(int argslen, char *args[])
{
    int a, b;
    printf("type 2 numbers :");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
    {
        printf("lcm number : %d \n", a > b ? a : b);
        return 0;
    }

    lcm(a, b);

    return 0;
}

void lcm(int a, int b)
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

    printf("lcm : %d \n", j);
}
