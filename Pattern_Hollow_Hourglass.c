#include <stdio.h>

int main()
{
    int r, c, s, n = 8;

    for (r = n; r >= 1; r--){
        for (s = 1; s <= n - r; s++){
            printf ("  ");
        }
        //for left half numbers, starts from 1 and
        //upto r.
        for (c = 1; c <= r; c++){
            if (r == 1||r == n||c == 1||c ==n){
                printf ("%c ", c+64);
            }
            else
                printf ("  ");

        }
        //for right half numbers, starts from r or
        //r - 1 and decreases until 1
        for (c = r - 1; c >= 1; c--){
                if (r == 1||r == n||c == 1||c ==n){
                printf ("%c ", c+64);
            }
            else
                printf ("  ");
            //printf ("%d ", c);
        }
        printf("\n");
    }
    //lower half starts from 2
    for (r = 2; r <= n; r++){
        for (s = n - 1; s >= r; s--){
            printf ("  ");
        }
        for (c = 1; c <= r; c++){
                if (r == 1||r == n||c == 1||c ==n){
                printf ("%c ", c+64);
            }
            else
                printf ("  ");
            //printf ("%d ", c);
        }
        for (c = r - 1; c >= 1; c--){
            if (r == 1||r == n||c == 1||c ==n){
                printf ("%c ", c+64);
            }
            else
                printf ("  ");
            //printf ("%d ", c);
        }
        printf ("\n");
    }
}

