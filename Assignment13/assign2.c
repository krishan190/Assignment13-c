#include <stdio.h>
int sumOdd(int);
int main()
{
    int k, n;
    printf("Enter the number want to show sum of odd natural number:");
    scanf("%d", &n);
    printf("%d", sumOdd(n));
    printf("\n");
}
int sumOdd(int n)
{
    if (n == 1)
        return 1;
    return (2 * n - 1) + sumOdd(n - 1);
}