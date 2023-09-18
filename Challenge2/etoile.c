#include<stdio.h>

int main()
{
    int i = 1;
    int e = 5;
    int g = 1;
    int c = e;

    printf("*");
    while(g < 14 && e != 0)
    {
        while(c != 0)
        {
            printf(" ");
            c--;
        }
            while (g > i)
            {
                printf("*");
                i++;
            }
        printf("\n");
        i= 1;
        g += 2;
        e--;
           // printf("hr");
    }
}