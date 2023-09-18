#include<stdio.h>

int main()
{
    char c;

    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c est majescule", c);
    }

    else if (c >= 'a' && c <= 'z')
    {
        printf("%c est miniscule", c);
    }
    else
        printf("%c n'est pas alphabetic", c);
}