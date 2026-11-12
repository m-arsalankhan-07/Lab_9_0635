#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[500];
    char updated[1000];
    char temp[500];

    char *ptr;
    char *start;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    // Remove newline
    feedback[strcspn(feedback, "\n")] = '\0';

    // Count characters
    printf("\nTotal characters: %lu", strlen(feedback));

    // Search for bad
    ptr = strstr(feedback, "bad");

    if (ptr == NULL)
    {
        printf("\nWord 'bad' not found.");
    }
    else
    {
        updated[0] = '\0';
        start = feedback;

        // Replace all occurrences of bad
        while ((ptr = strstr(start, "bad")) != NULL)
        {
            // Copy text before bad
            strncpy(temp, start, ptr - start);
            temp[ptr - start] = '\0';

            strcat(updated, temp);

            // Add replacement
            strcat(updated, "not good");

            // Move pointer after bad
            start = ptr + 3;
        }

        // Add remaining text
        strcat(updated, start);

        printf("\nUpdated feedback: %s", updated);
    }

    return 0;
}