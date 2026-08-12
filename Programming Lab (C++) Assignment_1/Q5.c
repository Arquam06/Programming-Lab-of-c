//write a program in c to print armstrong number

#include <stdio.h>

int isArmstrong(int n)
{
    int temp, rem, sum = 0;

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong Number", n);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}