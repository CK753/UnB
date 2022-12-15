#include <stdio.h>

unsigned int f91 (unsigned int n);

int main()
{
    unsigned int numero;

    while (scanf("%u", &numero) != EOF)
    {
        if (numero == 0)
        {
            continue;
        }

        printf("f91(%u) = %u\n", numero, f91(numero));
    }

    return 0;
}

unsigned int f91 (unsigned int n)
{
    if (n >= 101)
    {
        return n - 10;
    }
    else
    {
        return f91(f91(n+11));
    }
}
