#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice, i;

    printf("Enter a string: ");
    scanf("%99s", str);

    do {
        printf("\n--- String Operations ---\n");
        printf("1. String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char temp[100], ch;
                int j;

                strcpy(temp, str);

                for(i = 0, j = strlen(temp) - 1; i < j; i++, j--) {
                    ch = temp[i];
                    temp[i] = temp[j];
                    temp[j] = ch;
                }

                printf("Reverse = %s\n", temp);
                break;
            }

            case 3:
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase = %s\n", str);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}