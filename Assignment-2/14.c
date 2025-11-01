// Develop a C program to count the number of prime numbers in an array.
#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int arr[100], numOfElements, primeCount = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &numOfElements);
    for (int i = 0; i < numOfElements; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < numOfElements; i++)
    {
        if (isPrime(arr[i]))
        {
            primeCount++;
        }
        else
        {
            continue;
        }
    }
    printf("\nNumber of prime numbers in the array: %d\n", primeCount);

    return 0;
}