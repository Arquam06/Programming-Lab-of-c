//write a program in c to count the number of odd and even integers

#include <stdio.h>

void countOddEven(int n)
{
    int i, num, odd = 0, even = 0;

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);
}

int main()
{
    int n;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    countOddEven(n);

    return 0;
}