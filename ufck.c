#include <stdio.h>
#include <conio.h>
int main()
{
    int i, sum = 0;
    unsigned int n;
    printf("enter any number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += i;
    }

    printf("sum of even numbers from 1 to %u is %d", n, i);
    getch();
    return 0;
}