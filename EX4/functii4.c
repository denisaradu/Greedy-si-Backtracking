#include <stdio.h>
#include "header4.h"

void afisare(int *v, int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
}

void permutari(int *a, int nra, int N)
{
    int verif, i;
    
    if(nra == N)
      afisare(a, nra);
    else
    {
      for(i = 1; i <= N; i++)
      {
          verif = 0;
          for(int j = 0; j < nra; j++)
          {
            if(a[j] == i)
              verif = 1;
          }
      if(!verif)
      {  
        a[nra] = i;
        permutari(a, nra + 1, N);
      }
      }
    }
}
