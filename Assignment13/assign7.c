#include <stdio.h>
int HCF(int, int);
int HCF(int a, int b)
{
    if (b == 0)
        return a;
    HCF(b, a % b);
    return 0;
}
int main()
{
    int a, b, result;
    printf("Enter the two number:");
    scanf("%d%d", &a, &b);
    if (a > b)
        result = HCF(b, a % b);
    // else
    // {
    //     result = HCF(b, b % a);
    // }
    printf("%d", result);
    return 0;
}