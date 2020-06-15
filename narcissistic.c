#include <stdio.h>

void narcissistic();

int main(int argslen, char *args[])
{
    narcissistic();
    return 0;
}

void narcissistic()
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