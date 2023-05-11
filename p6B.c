//find maximum, minimum, variance and standard deviation of given array
#include <stdio.h>
int main()
{
    int n, n1;
    printf("enter the no of array element:");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:", i + 1);
        scanf("%d", &n1);
        arr[i] = n1;
    }
    int min, max, sum = arr[0];
    min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        sum = sum + arr[i];
    }
    printf("minimum of array is: %d", min);
    printf("\nmaximum of array is:%d", max);
    float var, sd, mean, value, sumvar = 0;
    mean = sum / n;
    for (int i = 0; i < n; i++)
    {
        value = arr[i] - mean;
        sumvar = sumvar + (value * value);
    }
    var = sumvar / n;
    printf("varience=%f \n", var);
    float temp;
    sd = var / 2;
    temp = 0;
    while (sd != temp)
    {
        temp = sd;
        sd = (var / temp + temp) / 2;
    }
    printf("standard deviation=%f", sd);
}