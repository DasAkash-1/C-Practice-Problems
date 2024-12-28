#include <stdio.h>

int main(){

    char s1[30] = "Akash Das";
    char s2[30];

    //find string length
    int i = 0, len = 0, j;

    while (s1[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length of string 1 = %d\n", len);

    //reverse string and put last character of s1 in first index of s2
    for(j = 0, i = len -1; i >= 0;j++, i--){
        s2[j] = s1[i];
    }
    s2[j] = '\n';

    printf("String 1: %s\n", s1);
    printf("string 2: %s", s2);
    getchar();
}
