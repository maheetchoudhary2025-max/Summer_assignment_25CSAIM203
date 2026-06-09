#include<stdio.h>
int main()
{
    int x, n;
    long long result = 1;
    printf("enter base (x): ");
    scanf("%d", &n);
    printf("enter  exponent (n): ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        result *= x;
    }
    printf("%d^%d = %11d\n", x, n, result);
    return 0;
}