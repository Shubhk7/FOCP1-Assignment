// . Write a C program to cyclically rotate the array clockwise by one position, applying array
// transformation logic used in scheduling and encryption.
// Input: arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4}
// Input: arr[] = {2, 3, 4, 5, 1}
// Output: {1, 2, 3, 4, 5}

#include <stdio.h>

void rotate(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
int main()
{
    int arr[100], DupArr[100], numofelements;
    printf("Enter number of elements in the array: ");
    scanf("%d", &numofelements);
    for (int i = 0; i < numofelements; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        DupArr[i] = arr[i];
    }
    rotate(arr, numofelements);
    printf("\nArray before cyclic rotation: [");
    for (int i = 0; i < numofelements; i++)
    {
        printf("%d ", DupArr[i]);
    }
    printf("]\n");
    printf("\nArray after cyclic rotation: [");
    for (int i = 0; i < numofelements; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    return 0;
}