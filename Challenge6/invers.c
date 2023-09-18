#include<stdio.h>

int main()
{
    int i = 0;
    int n;
    int result = 1;

    scanf("Saisie un nombre: %d", n);

    while(result != 0)
    {
        result = n%10;
        n = n/10;
        printf("%d", result);
        

    }
}