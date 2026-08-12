//write a c program to count the total number of duplicate elements in an array
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Total duplicate elements = %d", count);

    return 0;
}