#include<stdio.h>
int reverse(int n, int rev)
{
    if (n == 0)
    return rev;
    return reverse(n/10, rev*10 + n%10);
}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("reversed number = %d\n",reverse(num, 0));
    return 0;
}