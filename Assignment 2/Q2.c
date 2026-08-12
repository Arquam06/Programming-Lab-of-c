//write a c program to delete an array element at a specified position and display the array
#include <stdio.h>

int main()
{
    int arr[100], n, pos, value, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid Position!");
    }
    else
    {
        for(i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = value;
        n++;

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}