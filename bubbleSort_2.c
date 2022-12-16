#include <stdio.h>

#define MAX_ELEMENTOS 1000 // Define o tamanho máximo do array

// Função que implementa o algoritmo bubble sort
void bubble_sort(int array[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Troca os elementos
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[MAX_ELEMENTOS], n = 0; // Array de elementos e sua contagem

    // Lê elementos enquanto não for EOF
    while (scanf("%d", &array[n]) != EOF)
    {
        n++;
    }

    // Ordena o array usando bubble sort
    bubble_sort(array, n);

    // Imprime o array ordenado
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
