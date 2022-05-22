#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
     srand(time(0));
     
     int banc[5] = {1, 5, 10, 50, 100}, rest, nr_min = 0, cr, i = 4, fr[5] = {0, 0, 0, 0, 0}, nrbanc;

     rest = rand()%1000;
     cr = rest;

     while(cr != 0)
     {
        nrbanc = cr/banc[i];
        cr = cr % banc[i];
        fr[i] = nrbanc;
        nr_min += nrbanc;
        i--;
     }

     printf("Restul de %d RON s-a dat in %d bancnote.\n", rest, nr_min);
     for(i = 0; i < 5; i++)
        if(fr[i] != 0)
            printf("%d x %d RON\n", fr[i], banc[i]); 

     return 0;
}