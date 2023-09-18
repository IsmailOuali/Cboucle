#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    int p;
    scanf("%d", &n);

    while(i <= 10)
    {
        p = n*i;
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }
}