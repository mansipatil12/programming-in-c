//c program to find the square root of a number
#include <stdio.h>

double sqrt(double num, double low, double high);

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %lf is %lf\n", num, sqrt(num, 0, num));
    return 0;
}

double sqrt(double num, double low, double high)
{
    double mid = (low + high) / 2.0;
    double square = mid * mid;
    if (square == num || (high - low) < 0.0001)
    {
        return mid;
    }
    else if (square < num)
    {
        return sqrt(num, mid, high);
    }
    else
    {
        return sqrt(num, low, mid);
    }
}
