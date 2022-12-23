#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50000

long long int values[MAX_SIZE];
long long int size = 0;

void insertion_sort(long long int values[], long long int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = values[i];
        int j = i - 1;

        while (j >= 0 && values[j] > key)
        {
            values[j + 1] = values[j];
            j--;
        }

        values[j + 1] = key;
    }
}

int main()
{
    while (scanf("%lld", &values[size]) != EOF)
    {
        size++;
    }

    insertion_sort(values, size);

    for (int i = 0; i < size; i++)
    {
        printf("%lld ", values[i]);

        if (i < size - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
