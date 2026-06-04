#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the valueof n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("the sum of first %d natural number is %d",n,sum);
}