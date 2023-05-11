//program to print square root of a given number without function
#include<stdio.h>
int main()
{
    int n,i;
    float sq;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            sq=i;
            break;
        }
    }
    printf("Square root of %d is %f",n,sq);
    return 0;
}