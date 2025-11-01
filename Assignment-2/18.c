//  Develop a program to identify and print duplicate elements in an array, or print “-1” if no 
// duplicates exist, applying frequency detection and data validation. 
// Examples:  
// Input: {2, 10,10, 100, 2, 10, 11,2,11,2} 
// Output: 2 10 11 
// Input: {5, 40, 1, 40, 100000, 1, 5, 1} 
// Output: 5 40 1
#include <stdio.h>

int main()
{
    int arr[100], freq[100] = {0}, numofelement, flag = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &numofelement);
    for (int i = 0; i < numofelement; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < numofelement; i++)
    {
        freq[arr[i]]++;
    }
    printf("Duplicate elements in the array: ");
    for (int i = 0; i < numofelement; i++)
    {
        if (freq[arr[i]] > 1)
        {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}