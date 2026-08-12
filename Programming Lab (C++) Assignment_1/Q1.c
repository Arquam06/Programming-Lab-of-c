//write a program in c to check for a prime number

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
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
}