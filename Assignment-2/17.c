// Design a C program to delete an element from the front, middle, or end of an array, and print
// the array before and after deletion.
#include <stdio.h>

int main()
{
    int arr[100], duparr[100], numofelement, verify = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &numofelement);
    for (int i = 0; i < numofelement; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        duparr[i] = arr[i];
    }
    int position;
    do
    {
        printf("Enter position to delete the element (1 for front, %d for end, %d for middle): ", numofelement, (numofelement / 2) + 1);
        scanf("%d", &position);
        if (position == 1 || position == numofelement || position == (numofelement / 2) + 1)
        {
            if (position == 1)
            {
                for (int i = 0; i < numofelement - 1; i++)
                {
                    duparr[i] = duparr[i + 1];
                }
            }
            else if (position == numofelement)
            {
                duparr[numofelement - 1] = 0;
            }
            else if (position == (numofelement / 2) + 1)
            {
                for (int i = position - 1; i < numofelement - 1; i++)
                {
                    duparr[i] = duparr[i + 1];
                }
            }
            verify++;
        }
        else
        {
            printf("Invalid position. Please enter a valid position.\n");
        }
    } while (verify == 0);

    printf("Array before deletion: [");
    for (int i = 0; i < numofelement; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
    printf("Array after deletion: [");
    for (int i = 0; i < numofelement - 1; i++)
    {
        printf("%d, ", duparr[i]);
    }
    printf("]\n");
    return 0;
}