#include <stdio.h>
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
int main()
{
    int arr[100], n, i, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter thhe elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Choose the sorting algorithm: \n");
    printf("1. Bubble sort\n");
    printf("2. Selection sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        bubble_sort(arr, n);
        printf("Sorted array using bubble sort: ");
        break;
    case 2:
        selection_sort(arr, n);
        printf("Sorted array using selection sort: ");
        break;
    default:
        printf("Invalid choice");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int arr[], int n)
{
    int i, j, temp, swaps = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    printf("Number of swaps using bubble sort:%d\n", swaps);
}

void selection_sort(int arr[], int n)
{
    int i, j, temp, swaps = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swaps++;
            }
        }
    }
    printf("Number of swaps using selectionsort:%d\n", swaps);
}