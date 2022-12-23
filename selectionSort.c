#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int values[MAX_SIZE];
int size = 0;

void selection_sort(int values[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (values[j] < values[min_index])
            {
                min_index = j;
            }
        }

        int temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
    }
}

int main()
{
    while (scanf("%d ", &values[size]) != EOF)
    {
        size++;
    }

    selection_sort(values, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", values[i]);

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
