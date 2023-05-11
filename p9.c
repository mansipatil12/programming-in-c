#include <stdio.h>
#include <string.h>

    int main()
{
    char str[100], copy[100];
    int choice, len, i, count_char = 0, count_vowel = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n1. Length of string\n2. Total number of characters\n3. Total number of vowels\n4. Copy string to another\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            len = 0;
            while (str[len] != '\0')
            {
                len++;
            }
            printf("Length of string is %d\n", len);
            break;
        case 2:
            count_char = 0;
            for (i = 0; str[i] != '\0'; i++)
            {
                count_char++;
            }
            printf("Total number of characters in string is %d\n", count_char);
            break;
        case 3:
            count_vowel = 0;
            for (i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                {
                    count_vowel++;
                }
            }
            printf("Total number of vowels in string is %d\n", count_vowel);
            break;
        case 4:
            i = 0;
            while (str[i] != '\0')
            {
                copy[i] = str[i];
                i++;
            }
            copy[i] = '\0';
            printf("Copied string is %s\n", copy);
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
        break;
    } while (choice != 5);

    return 0;
}
