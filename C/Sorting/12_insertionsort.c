//Aim:Write a program to implement insertion sort.
//Code

#include <stdio.h>
void main()
{
    int n, i, j, temp;
    int arr[64];
    printf("Enter number of elements= ");
    scanf("%d", &n);
    printf("Enter %d integers= ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
