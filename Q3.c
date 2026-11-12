#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[100];

    char *ptr;

    // Input email
    printf("Enter email address: ");
    scanf("%99s", email);

    // Find @ symbol
    ptr = strchr(email, '@');

    if (ptr == NULL || ptr == email || strchr(ptr + 1, '@') != NULL || *(ptr + 1) == '\0')
    {
        printf("Invalid email address!");
    }
    else
    {
        // Extract domain
        strcpy(domain, ptr + 1);

        printf("Email: %s\n", email);
        printf("Domain: %s\n", domain);
    }

    return 0;
}