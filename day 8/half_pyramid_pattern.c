#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("enter a number of rows:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (i = 1; i <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}