//program to search for user given element in a set of n nos. And find its no of occurences
#include <stdio.h>
int main()
{
    int n, i, x, c = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            c++;
        }
    }
    printf("The number of occurences of %d is %d", x, c);
    return 0;
}