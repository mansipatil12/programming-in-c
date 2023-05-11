//Program to check wheather no is spy or not
#include <stdio.h>
int main()
{
    int n, sum = 0, product = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        product = product * rem;
        n = n / 10;
    }
    if (sum == product)
    {
        printf("The number is a spy number");
    }
    else
    {
        printf("The number is not a spy number");
    }
    return 0;
}