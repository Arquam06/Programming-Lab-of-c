//copy the elements of one array into another array 
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements of second array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}