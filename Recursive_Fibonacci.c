#include <stdio.h>

int Fibonacci(int n){

    if(n == 0 || n == 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void FibonacciSeries(int n){

    printf("Fibonacci series: %d\n", n);

    for(int i = 0; i <= n; i++){
        printf("%d ", Fibonacci(i));
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    FibonacciSeries(n);
}
