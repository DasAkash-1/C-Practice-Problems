#include <stdio.h>

int CountSetBits(int n){

    int count = 0;
    while(n > 0){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int i;

    printf("Enter an Integer: ");
    scanf("%d", &i);

    printf("Set Bits: %d", CountSetBits(i));

    return 0;
}
