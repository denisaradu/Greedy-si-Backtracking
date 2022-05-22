#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header5.h"

int main()
{
     srand(time(0));

    int N, *a, i, k;

    N = rand() % 5 + 3;
    k = rand() % N + 1;

    printf("Aranjamente de %d luate cate %d\n\n", N, k);

    a = malloc(sizeof(int) * N);

    if(!a)
    {
        printf("Nu s-a putut aloca dinamic.\n");
        exit(1);
    }

    for(i = 0; i < N; i++)
        a[i] = i + 1;

    aranjamente(N, a, 0, k);
    printf("Sunt %d aranjamente\n\n", NRA);

    printf("Combinari de %d luate cate %d\n\n", N, k);

    combinari(N, a, 0, k);
    printf("Sunt %d combinari\n", NRC);

    return 0;    
}