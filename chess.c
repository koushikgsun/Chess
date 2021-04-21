//importing libraries.
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
    printf("key:\nB - black\nW - white\n\nQ - queen\nR - rook\nB - bishop\nK - knight\nP - pawn\nS - stalemate\nW - won\n\n\n");
    int bpoints = 0;
    int wpoints = 0;

    for (int i = 0; i > -1 ; i++)
    {
        char color = get_char("Color (B or W) :");
       if (color == 'B' || color == 'b')
        {
        char captured = get_char("Piece captured/final result: ");
        if ( captured == 'p' || captured == 'P')
        {
            bpoints = bpoints + 1;
        }
        else if (captured == 'K' || captured == 'k'|| captured == 'B' || captured == 'b')
        {
            bpoints = bpoints + 3;
        }
        else if (captured == 'R' || captured == 'r')
        {
            bpoints = bpoints + 5;
        }
        else if (captured == 'Q' || captured == 'q')
        {
            bpoints = bpoints + 9;
        }
        else if (captured == 'S' || captured == 's')
        {
            printf("!! TIE !!\n──────▄▀▄─────▄▀▄\n─────▄█░░▀▀▀▀▀░░█▄\n─▄▄──█░░░░░░░░░░░█──▄▄\n█▄▄█─█░░▀░░┬░░▀░░█─█▄▄█\n");
            if (wpoints > bpoints)
            {
                printf("white wins through points\n");
            }
            else if(bpoints > wpoints)
            {
                printf("black wins through points\n");
            }
            else if (bpoints == wpoints)
            {
                printf("points are also tied !!\n");
            }
            printf("Black : %i\nwhite : %i",bpoints,wpoints);
            return 0;
        }
        else if (captured == 'w' || captured == 'W')
        {
            printf("Black : %i\nwhite : %i\n",bpoints,wpoints);
            printf("!! Black wins !!\n                       \n░░░░░░░░▌▒█░░░░░░░░░░░▄▀▒▌░░░\n░░░░░░░░▌▒▒█░░░░░░░░▄▀▒▒▒▐░░░\n░░░░░░░▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐░░░\n░░░░░▄▄▀▒░▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐░░░\n░░░▄▀▒▒▒░░░▒▒▒░░░▒▒▒▀██▀▒▌░░░ \n░░▐▒▒▒▄▄▒▒▒▒░░░▒▒▒▒▒▒▒▀▄▒▒▌░░\n░░▌░░▌█▀▒▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐░░\n░▐░░░▒▒▒▒▒▒▒▒▌██▀▒▒░░░▒▒▒▀▄▌░\n░▌░▒▄██▄▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▌░\n▀▒▀▐▄█▄█▌▄░▀▒▒░░░░░░░░░░▒▒▒▐░\n▐▒▒▐▀▐▀▒░▄▄▒▄▒▒▒▒▒▒░▒░▒░▒▒▒▒▌\n▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒▒▒░▒░▒░▒▒▐░\n░▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒░▒░▒░▒░▒▒▒▌░\n░▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▒▄▒▒▐░░\n░░▀▄▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▄▒▒▒▒▌░░\n░░░░▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀░░░\n░░░░░░▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀░░░░░\n░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▀▀░░░░░░░░\n");
        return 0;
        }
    }
    else if (color == 'W' || color == 'w')
    {
        char captured = get_char("Piece captured/final result: ");
        if ( captured == 'p' || captured == 'P')
        {
            wpoints = wpoints + 1;
        }
        else if (captured == 'K' || captured == 'k'|| captured == 'B' || captured == 'b')
        {
            wpoints = wpoints + 3;
        }
        else if (captured == 'R' || captured == 'r')
        {
            wpoints = wpoints + 5;
        }
        else if (captured == 'Q' || captured == 'q')
        {
            wpoints = wpoints + 9;
        }
        else if (captured == 'S' || captured == 's')
        {
            printf("!! TIE !!\n──────▄▀▄─────▄▀▄\n─────▄█░░▀▀▀▀▀░░█▄\n─▄▄──█░░░░░░░░░░░█──▄▄\n█▄▄█─█░░▀░░┬░░▀░░█─█▄▄█\n");
            if (wpoints > bpoints)
            {
                printf("white wins through points\n");
            }
            else if(bpoints > wpoints)
            {
                printf("black wins through points\n");
            }
            else if (bpoints == wpoints)
            {
                printf("points are also tied !!\n");
            }
            printf("Black : %i\nwhite : %i",bpoints,wpoints);
            return 0;
        }
        else if (captured == 'w' || captured == 'W')
        {
            printf("Black : %i\nwhite : %i\n",bpoints,wpoints);
            printf("!! White wins !!\n                             \n░░░░░░░░▌▒█░░░░░░░░░░░▄▀▒▌░░░\n░░░░░░░░▌▒▒█░░░░░░░░▄▀▒▒▒▐░░░\n░░░░░░░▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐░░░\n░░░░░▄▄▀▒░▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐░░░\n░░░▄▀▒▒▒░░░▒▒▒░░░▒▒▒▀██▀▒▌░░░ \n░░▐▒▒▒▄▄▒▒▒▒░░░▒▒▒▒▒▒▒▀▄▒▒▌░░\n░░▌░░▌█▀▒▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐░░\n░▐░░░▒▒▒▒▒▒▒▒▌██▀▒▒░░░▒▒▒▀▄▌░\n░▌░▒▄██▄▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▌░\n▀▒▀▐▄█▄█▌▄░▀▒▒░░░░░░░░░░▒▒▒▐░\n▐▒▒▐▀▐▀▒░▄▄▒▄▒▒▒▒▒▒░▒░▒░▒▒▒▒▌\n▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒▒▒░▒░▒░▒▒▐░\n░▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒░▒░▒░▒░▒▒▒▌░\n░▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▒▄▒▒▐░░\n░░▀▄▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▄▒▒▒▒▌░░\n░░░░▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀░░░\n░░░░░░▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀░░░░░\n░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▀▀░░░░░░░░\n");
        return 0;
        }
    
    }
    }
}
