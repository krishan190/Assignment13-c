#include <stdio.h>
int sumDigit(int);
int main()
{
    int k, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%d", sumDigit(n));
    printf("\n");
}
int sumDigit(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumDigit(n / 10);
}