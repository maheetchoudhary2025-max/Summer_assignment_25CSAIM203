#include <stdio.h>

int main() 
{
    int n, i, j, sum, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(arr[i] + arr[j] == sum) 
            {
                printf("Pair Found: %d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
        printf("No Pair Found");

    return 0;
}