#include <stdio.h>

int main() 
{
    int roll[100], n, i;
    char name[100][50];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) 
    {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}