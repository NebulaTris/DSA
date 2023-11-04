//Aim:Write a program to implement linear and binary search.
//Code:

#include <stdio.h>
int main()
{
   int array[100], b, c, n,p,lb,ub,mid;
   printf("Enter length of array:");
   scanf("%d", &n);
   printf("Enter %d element/(s) in a sorted manner:", n);
   for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
    printf("Enter element to be searched:");
    scanf("%d", &b);
    printf("\nOperation Menu\n");
    printf("\t1.Linear Search\n");
    printf("\t2.Binary Search\n");
    printf("Enter your choice:");
    scanf("%d",&p);
    switch(p)
    {
        case 1:
        for (c = 0; c < n; c++)
        {
            if (array[c] == b)
            {
            printf("By linear search we get the following result:\n");
            printf("%d is present at location %d.\n", b, c+1);
            break;
            }
        }
        if (c == n)
        printf("%d isn't present in the array.\n", b);
        break;
        case 2:
        {
        lb = 0;
        ub = n - 1;
        mid = (lb+ub)/2;
        while (lb <= ub) {
            if(array[mid] < b)
            lb = mid + 1;
            else if (array[mid] == b) {
                printf("By binary search we get the following result:\n");
                printf("%d found at location %d", b, mid+1);
                break;
            }
            else
            ub = mid - 1;
            mid = (lb+ub)/2;
        }
        if(lb > ub)
        printf("Not found! %d isn't present in the list", b);
        break;
        }
    }
  return 0;
}
