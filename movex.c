#include <stdio.h>

void movex (char *palavra);

int main()
{
    char palavra[100];

    scanf("%s", &palavra);

    movex(palavra);

    return 0;
}

void movex (char *palavra)
{
    if (*palavra == 'x')
    {
        movex(palavra + 1);

        printf("%c", *palavra);
    }

    else if (*palavra)
    {
        printf("%c", *palavra);

        movex(palavra + 1);
    }
}