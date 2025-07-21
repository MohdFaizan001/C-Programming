#include <stdio.h>

int main()
{
    int length = 0;
    int str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces

    // Manually calculate length (excluding '\0')
    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            break; // Stop at newline (from Enter key)
        }
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}