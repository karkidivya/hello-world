#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned int n;
    int i;
    printf("enter a number");
    scanf("%u,&n");
    printf("series form 1 to %u is", n);
    for (i = 1; i <= n; i++)
    {
       
        printf("%d", i);
    }
    getch();
    return 0;
}