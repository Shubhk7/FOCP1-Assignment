//  Design a C program to find a peak element that is not smaller than its neighbours.

#include <stdio.h>

int main()
{
    int arr[100], n, i, peak = -1;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("\tEnter %d elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (n == 1)
    {
        peak = 0;
    }
    else if (arr[0] >= arr[1])
    {
        peak = 0;
    }
    else if (arr[n - 1] >= arr[n - 2])
    {
        peak = n - 1;
    }
    else
    {

        for (i = 1; i < n - 1; i++)
        {
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            {
                peak = i;
                break;
            }
        }
    }

    if (peak != -1)
    {
        printf("Peak element is %d\nAt index %d or %d position in array\n", arr[peak], peak, peak + 1);
    }
    else
    {
        printf("No peak element found.\n");
    }

    return 0;
}
