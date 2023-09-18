#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n >0)
    {
        printf("ce nombre est positif");
    }
    else if(n < 0)
    {
        printf("ce nombre est negatif");
    }
    else
        printf("ce nombre egale a zero");
}