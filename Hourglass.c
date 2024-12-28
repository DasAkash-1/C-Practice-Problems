#include <stdio.h>

int main()
{

    int r, c, s, n = 5;

    for (r = n; r >= 1; r--){
        for (s = 1; s <= n - r; s++){
            printf ("  ");
        }
        //for left half numbers, starts from 1 and
        //upto r.
        for (c = 1; c <= r; c++){
            printf ("%d ", c);
        }
        //for right half numbers, starts from r or
        //r - 1 and decreases until 1
        for (c = r - 1; c >= 1; c--){
            printf ("%d ", c);
        }
        printf("\n");
    }
    //lower half starts from 2
    for (r = 2; r <= n; r++){
        for (s = n - 1; s >= r; s--){
            printf ("  ");
        }
        for (c = 1; c <= r; c++){
            printf ("%d ", c);
        }
        for (c = r - 1; c >= 1; c--){
            printf ("%d ", c);
        }
        printf ("\n");
    }
}
