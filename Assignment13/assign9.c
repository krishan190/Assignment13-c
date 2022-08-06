#include <stdio.h>
int countDigit(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%d", countDigit(n));
    printf("\n");
}
int countDigit(int n)
{
    if(n<10)
    return 1;
    else
    return 1+countDigit(n/10);
}