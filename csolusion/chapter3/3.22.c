#include<stdio.h>
int main()
{
    int num, i, counter = 0;
    while(1)
    {
        printf("Enter a number(-1 to end): ");
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                counter++;
            }
        }
        if(counter != 1)
        {
            printf("It's NOT a prime number.\n");
        }
        else
        {
            printf("It's a prime number.\n");
        }
    }
    
    return 0;
}