#include <stdio.h>

int main()
{

    int i, j;
    int a[9] = {0, 1, 3, 5, 7, 9, 11, 13, 15};

    for (i = 0; i <= 8; i++){
        printf ("%d ", a[i]);
    }
    printf ("\n");

    for (j = 8; j >=0; j--){
        printf ("%d ", a[j]);
    }

    return 0;
}
