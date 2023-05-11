//Program to convert capiital letter to small letter
#include <stdio.h>

int main()
{
    char capital_letter, small_letter;

    printf("Enter a capital letter: ");
    scanf("%c", &capital_letter);

    // converting capital letter to small letter
    small_letter = capital_letter + 32;

    printf("The small letter of %c is %c", capital_letter, small_letter);

    return 0;
}