#include<stdio.h>
int main()
{
    int n,first=0,second=1,next, i;
    printf("enter the value of n:");
    scanf("%d", &n);
    if(n == 1)
    printf("the %dth fibonacci term is %dth", n, first);
    else if(n == 2)
    printf("the %dth fibonacci term is %d, n, second");
    else
    {
        for(i = 3; i <= n; i++)
        {
            next =first + second;
            first = second;
            second = next;

        }
        printf("the %dth fibonacci term is %d", n, second);

    }
    return 0;

}