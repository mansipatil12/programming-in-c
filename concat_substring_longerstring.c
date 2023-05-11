#include <stdio.h>

int main()
{
    int choice;
    printf("\n1) Concatenate");
    printf("\n2) Find substring");
    printf("\n3) Find the longer string");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    char str1[256];
    printf("Enter the first string: ");
    scanf("%s", &str1);

    int str1_len;
    for (int i = 0; str1[i] != '\0'; i++)
        str1_len++;

    switch (choice)
    {
    case 1:
    {
        char str2[256];
        printf("Enter the second string: ");
        scanf("%s", &str2);

        int str2_len;
        for (int i = 0; str2[i] != '\0'; i++)
            str2_len++;

        char conc[512];

        int i;
        for (i = 0; i < str1_len; i++)
        {
            if (str1[i] == '\0')
                break;
            else
                conc[i] = str1[i];
        }

        for (int j = 0; j < str2_len; j++)
        {
            if (str2[j] == '\0')
            {
                conc[j + i] = '\0';
                break;
            }
            else
                conc[j + i] = str2[j];
        }

        printf("Concatenated string: %s", conc);
        break;
    }
    case 2:
    {
        char substr[256];
        printf("Enter the substring: ");
        scanf("%s", substr);

        int substr_len = 0;
        while (substr[substr_len] != '\0')
        {
            substr_len++;
        }

        char first_char = substr[0];
        int matches[256];
        int counter = 0;
        for (int i = 0; str1[i + substr_len - 1] != '\0'; i++)
        {
            char curr_char = str1[i];
            if (curr_char == first_char)
            {
                matches[counter] = i;
                counter++;
                continue;
            }
        }

        int flag;

        for (int match_index = 0; match_index < counter; match_index++)
        {
            for (int i = 0; i < substr_len; i++)
            {
                if (str1[matches[match_index] + i] != substr[i])
                    break;
                else if (i == substr_len - 1)
                {
                    printf("Substring found at index %d\n", matches[match_index]);
                    if (flag == 0)
                        flag = 1;
                }
            }
        }

        if (flag != 1)
            printf("Substring not found");
        break;
    }
    case 3:
    {
        char str2[256];
        printf("Enter the second string: ");
        scanf("%s", &str2);

        int str2_len;
        for (int i = 0; str2[i] != '\0'; i++)
            str2_len++;

        if (str1_len == str2_len)
            printf("Both strings are of equal length");
        else
        {
            printf("The longer string is string number %d", str1_len > str2_len ? 1 : 2);
            printf("\n%s", str1_len > str2_len ? str1 : str2);
        }

        break;
    }

    default:
    {
        printf("Please enter a number between 1 and 3!");
        break;
    
    }
    }
}