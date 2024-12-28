#include <stdio.h>

fact(int n){
    if (n == 1)
        return 1;
    else
        return n * (n-1);
}
int main()
{
    int n = 5;

    printf ("%d", fact(n));

    return 0;

}
