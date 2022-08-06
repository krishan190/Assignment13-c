#include<stdio.h>
int fact(int);
int fact (int n)
{
    if(n==0||n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int k;
    printf("Enter the number: ");
    scanf("%d",&k);
    // fact(k);
    printf("Factorial of %d is %d",k,fact(k));
    printf("\n");
    return 0;
}