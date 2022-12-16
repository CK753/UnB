#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, k, gol1, gol2;
    char time[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    char resultado[10];
    int aux = 0;

    for (i = 0; i < 8; i++)
    {
        scanf("%d %d", &gol1, &gol2);

        if (gol1 > gol2)
        {
            resultado[i] = time[aux];
        }

        else
        {
            resultado[i] = time[aux + 1];
        }

        aux += 2;
    }

    aux = 0;

    for (j = 0; j < 4; j++)
    {
        scanf("%d %d", &gol1, &gol2);

        if (gol1 > gol2)
        {
            resultado[j] = resultado[aux];
        }

        else
        {
            resultado[j] = resultado[aux + 1];
        }

        aux += 2;
    }

    aux = 0;

    for (k = 0; k < 2; k++)
    {
        scanf("%d %d", &gol1, &gol2);

        if (gol1 > gol2)
        {
            resultado[k] = resultado[aux];
        }

        else
        {
            resultado[k] = resultado[aux + 1];
        }

        aux += 2;
    }

    scanf("%d %d", &gol1, &gol2);

    if (gol1 > gol2)
    {
        printf("%c", resultado[0]);
    }
    
    else
    {
        printf("%c", resultado[1]);
    }
}