#include <stdio.h>

int main() 
{
    int a[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Largest Element\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += a[i];
                printf("Sum = %d\n", sum);
                break;

            case 3: {
                int max = a[0];
                for(i = 1; i < n; i++)
                    if(a[i] > max)
                        max = a[i];
                printf("Largest = %d\n", max);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}