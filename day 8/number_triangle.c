#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("enter number of rows:");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for (j = 1; i <= rows; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
    
}