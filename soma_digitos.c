#include <stdio.h>

unsigned long long int soma (unsigned long long int *digito, unsigned long long int n)
{
    if (*digito == 0)
    {
        return n;
    }
    
    else
    {
        n += *digito % 10;
        *digito /= 10;
        return soma(digito, n);
    }
}

int main()
{
    unsigned long long int digito;

    scanf("%llu\n", &digito);

    printf("%llu\n", soma(&digito, 0));
}