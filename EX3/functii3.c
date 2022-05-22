#include <stdio.h>
#include <stdlib.h>
#include "header3.h"

void afisare(int *a, int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

void prod_cartezian(int *a, int *alese, int N, int nrelem, int nr)
{   
    if(nrelem == N)
        afisare(alese, N);
    else
    {
        for(int i = 0; i < nr; i++)
        {
            alese[nrelem] = a[i];
            prod_cartezian(a, alese, N, nrelem + 1, nr);
        }
    }
}

