#include<stdio.h>

int main()
{
    int n;
    int i = 0;

    while(i< 100)
    {
        if (i % 10 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}