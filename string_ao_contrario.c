#include <stdio.h>

void contrario(char *string)
{
    if (*string)
    {
        contrario(string + 1);
        printf("%c", *string);
    }
}

int main()
{
    char x[501];

    scanf("%s", x);

    contrario(x);

    return 0;
}