#include<stdio.h>
int main()
{
    int i, j;
    for(i = 10; i >= 1; i--)
    {
        for(j = 2; j <= i; j ++)
        {
            printf(" ");
        }
        for(j = 10; j >= i; j--)
        {
            printf("%s", "*");
        }
        puts("");
    }
    return 0;
}