#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][50];
    char temp[50];

    // Input 10 student names
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    // Sort alphabetically using bubble sort
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                // Swap names
                strcpy(temp, names[j]);

                strcpy(names[j], names[j + 1]);

                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}