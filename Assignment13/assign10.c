#include<stdio.h>
int power(int , int);
int power(int b,int p)
{
   if(p==0)
   return 1;
   else
   return b * power(b,p-1);

}
int main()
{
    int b,p,r;
    printf("Enter the base value:");
    scanf("%d",&b);
    printf("Enter the power value:");
    scanf("%d",&p);
    r=power(b,p);
    printf("result=%d",r);
    printf("\n");
    return 0;
}