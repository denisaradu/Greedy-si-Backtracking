#include <stdio.h>
#include <stdlib.h>
#include "header3.h"
#include <time.h>

int main()
{
    srand(time(0));
    
    int *a, *prod, N, nr = 0;

    N = rand() % 6 + 1;
    printf("%d cifre\n", N);
    nr = rand() % 5 + 1;
    printf("%d elemente in vector\n\n", nr);

    a = malloc(sizeof(int) * nr);
    for(int i = 0; i < nr; i++)
        a[i] = i + 1;

    prod = malloc(sizeof(int) * N);

    prod_cartezian(a, prod, N, 0, nr);

    return 0;
}

//pentru a se putea vizualiza
//toate solutiile, se ruleaza codul
//folosind comanda make run > prod.txt