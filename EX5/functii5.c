#include <stdio.h>
#include <stdlib.h>
#include "header5.h"
int NRC, NRA;

void afisare(int *v, int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
}

void aranjamente(int N, int *a, int nra, int k)
{
     int verif, i;
    
    if(nra == k)
      {
        afisare(a, nra);
        NRA++;
      }
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
        aranjamente(N, a, nra + 1, k);
      }
      }
    }
 
}

void combinari(int N, int *a, int nra, int k)
{
     int verif, i;
    
    if(nra == k)
      {
        afisare(a, nra);
        NRC++;
      }
    else
    {
      for(i = 1; i <= N; i++)
      {
          verif = 0;
          for(int j = 0; j < nra; j++)
          {
            if(a[j] >= i)
              verif = 1;
          }
      if(!verif)
      {  
        a[nra] = i;
        combinari(N, a, nra + 1, k);
      }
      }
    } 
}

