#include <stdio.h>

enum {N = 80};

unsigned long long serie[N + 1] = {[1] = 1, [2] = 1};

unsigned long long fibonacci (int n)
{
    if (!serie[n])
    {
        serie[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }

    return serie[n];
}


