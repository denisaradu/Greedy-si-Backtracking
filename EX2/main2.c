#include <stdio.h>

int main()
{
     
     int banc[57] = {1, 3, 5, 15, 30, 50, 150}, rest = 90, nr_min = 0, cr, i = 6, fr[7] = {0, 0, 0, 0, 0, 0, 0};

     cr = rest;

     while(cr != 0)
     {
        while(banc[i] <= cr)
        {
            nr_min++;
            cr = cr - banc[i]; 
            fr[i]++;
        }
        i--;
     }

     printf("Restul de %d RON s-a dat in %d bancnote.\n", rest, nr_min);
     for(i = 0; i < 7; i++)
        if(fr[i] != 0)
            printf("%d x %d RON\n", fr[i], banc[i]); 

     return 0;
}


//Tehnica Greedy nu e optima in cazul de fata,
//deorece se obtin 4 bancnote, ceea ce nu este
//eficient, solutia optima fiind 3 x 30 bancnote.