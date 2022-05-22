#include <stdio.h>
#include <stdlib.h>
#include "header4.h"
#include <time.h>

int main()
{
    srand(time(0));

    int N, *a, i;

    N = rand() % 5 + 1;

    printf("Permutari de %d elemente\n\n", N);

    a = malloc(sizeof(int) * N);

    if(!a)
    {
        printf("Nu s-a putut aloca dinamic.\n");
        exit(1);
    }

    for(i = 0; i < N; i++)
        a[i] = i + 1;

    permutari(a, 0, N);

    return 0;    
}
