#include <stdio.h>
#include <string.h>

    int
    main()
{
    char str[100], rev[100];
    int len, i, j, choice;

    printf("Enter a string: ");
    scanf("%s", str);

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    do
    {
        printf("\nChoose an option:\n");
        printf("1. Print reversed string\n");
        printf("2. Check if the string is palindrome\n");
        printf("3. Check if the string is equal or not\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nThe reversed string is: ");
            for (i = len - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        case 2:
            j = 0;
            for (i = len - 1; i >= 0; i--)
            {
                rev[j++] = str[i];
            }
            rev[j] = '\0';
            for (i = 0; i < len; i++)
            {
                if (str[i] != rev[i])
                {
                    break;
                }
            }
            if (i == len)
            {
                printf("\nThe string is palindrome\n");
            }
            else
            {
                printf("\nThe string is not palindrome\n");
            }
            break;
        case 3:
            printf("\nEnter another string to compare with: ");
            scanf("%s", rev);
            for (i = 0; i < len; i++)
            {
                if (str[i] != rev[i])
                {
                    break;
                }
            }
            if (i == len && rev[i] == '\0')
            {
                printf("\nThe strings are equal\n");
            }
            else
            {
                printf("\nThe strings are not equal\n");
            }
            break;
        case 4:
            printf("\nExiting...\n");
            break;
        default:
            printf("\nInvalid choice. Please try again.\n");
            break;
        }
        break;
    } while (choice != 4);
    return 0;
}
