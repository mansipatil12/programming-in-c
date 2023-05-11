#include <stdio.h>

int main()
{
    int size1, size2, i, j, k, l, flag;

    printf("Enter size of set 1: ");
    scanf("%d", &size1);
    int set1[size1];
    printf("Enter elements of set 1: ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("\nEnter size of set 2: ");
    scanf("%d", &size2);
    int set2[size2];
    printf("Enter elements of set 2: ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &set2[i]);
    }

    int union_set[size1 + size2], intersection_set[(size1 < size2) ? size1 : size2];

    k = 0;
    for (i = 0; i < size1; i++)
    {
        union_set[k] = set1[i];
        k++;
    }
    for (i = 0; i < size2; i++)
    {
        flag = 0;
        for (j = 0; j < size1; j++)
        {
            if (set2[i] == set1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            union_set[k] = set2[i];
            k++;
        }
    }

    l = 0;
    for (i = 0; i < size1; i++)
    {
        flag = 0;
        for (j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            intersection_set[l] = set1[i];
            l++;
        }
    }

    printf("\nUnion of set 1 and set 2 is: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", union_set[i]);
    }

    printf("\nIntersection of set 1 and set 2 is: ");
    for (i = 0; i < l; i++)
    {
        printf("%d ", intersection_set[i]);
    }

    return 0;
}