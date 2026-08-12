//write a program in c to check for a prime number within a range

#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int start, end, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}