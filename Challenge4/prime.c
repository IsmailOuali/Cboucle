#include<stdio.h>

int main()
{
    int x;
    int i = 2;
    int j =2;

    printf("Entrer un nombre: ");
    scanf("%d", &x);

    

    while(x > i)
    {
            if (i % j == 0)
                i++;
            
        i++;
    }
    if (x == i)
        printf("%d ce nombre est premier", x);
}