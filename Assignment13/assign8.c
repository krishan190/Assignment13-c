#include <stdio.h>
int fib(int);
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n, i;
    printf("enter the value of n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("  %d  ", fib(i));
    printf("\n");
    return 0;
}