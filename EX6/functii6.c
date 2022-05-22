#include <stdio.h>
#include <stdlib.h>
#include "header6.h"

int isValid(int board[][9], int l, int c, int nr)
{
    int i, j, lbox, cbox;

    for(i = 0; i < 9; i++)
    {
        if(board[l][i] == nr)
            return 0;
        if(board[i][c] == nr)
            return 0;    
    }

    lbox = (l / 3) * 3;
    cbox = (c / 3) * 3;

    for(i = lbox; i < lbox + 3; i++)
        for(j = cbox; j < cbox + 3; j++)
            if(board[i][j] == nr)
                return 0;

    return 1;            
}    

int sudoku(int board[][9], int l, int c)
{ 
    int numar, ok = 0;

    if(board[l][c] == 0)
    {
    for(numar = 1; numar <= 9; numar++)
    {
        if(isValid(board, l, c, numar))
        {
            board[l][c] = numar;
            if(l == 8 && c == 8)
                {
                    afisare(board);
                    ok = 1;
                    break;
                }
            else
            {
                if(c < 8)
                    ok += sudoku(board, l, c + 1);
                else
                    ok += sudoku(board, l + 1, 0);   
            }    
        }
         board[l][c] = 0;
    }
    
    }
    else{
        if(l == 8 && c == 8)
                {
                    afisare(board);
                    ok = 1;
                }
        else        
        if(c < 8)
            ok += sudoku(board, l, c + 1);
        else
            ok += sudoku(board, l + 1, 0);    
    }

    return ok;
}


void afisare(int board[][9])
{
    FILE *f;
    int i, j;

    f = fopen("sudoku.txt", "wt");

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
            fprintf(f, "%d ", board[i][j]);
        fprintf(f, "\n");    
    }

    fclose(f);
}