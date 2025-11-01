// Implement a C program to insert an element at the front, middle, or end of an array, and print
// the array before and after insertion.
#include <stdio.h>

int main()
{
    int arr[100], chanArr[100], numofelement, verify = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &numofelement);
    for (int i = 0; i < numofelement; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        chanArr[i] = arr[i];
    }
    int position, newElement;
    do
    {
        printf("Enter position to insert the new element (1 for front, %d for end, %d for middle): ", numofelement + 1, (numofelement / 2) + 1);
        scanf("%d", &position);
        if (position == 1 || position == numofelement + 1 || position == (numofelement / 2) + 1)
        {
            printf("Enter the new element to insert: ");
            scanf("%d", &newElement);

            // if (position < 1 || position > numofelement + 1)
            // {
            //     printf("Invalid position. Please enter a valid position: ");
            //     scanf("%d", &position);
            // }
            if (position == 1)
            {
                for (int i = numofelement; i > 0; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[0] = newElement;
            }
            else if (position == numofelement + 1)
            {
                arr[numofelement] = newElement;
            }
            else if (position == (numofelement / 2) + 1)
            {
                for (int i = numofelement; i >= position; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[position - 1] = newElement;
            }
            int sizearr = sizeof(arr) / sizeof(arr[0]);
            int sizechanarr = sizeof(chanArr) / sizeof(chanArr[0]);
            if (sizechanarr > sizearr)
            {
                verify++;
                break;
            }
        }
        else
        {
            printf("Invalid position entered. Please try again.\n");
        }
    } while (verify == 0);

    printf("\nArray before insertion: [");
    for (int i = 0; i < numofelement; i++)
    {
        printf("%d ", chanArr[i]);
    }
    printf("]\n");

    printf("\nArray after insertion: [");

    for (int i = 0; i < numofelement + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    return 0;
}
