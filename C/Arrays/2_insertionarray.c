//Aim:To insert an element at the start ,end and specific position of an array.
//Code

#include <stdio.h>

    int main()
    {
        int x;
        printf ("Enter length of array:");
        scanf("%d",&x);
        int ar[x],n;
        printf ("Enter elements of array:");
        for(int i=1;i<x;i++)
        {
            scanf("%d",&ar[i]);
        }
        printf("\nOperation Menu\n");
        printf("\t1.To insert element at the beginning\n");
        printf("\t2.To insert an element at the end\n");
        printf("\t3.To insert element at any other position\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
        {
    
         int a;
         printf("Enter element to be inserted:"); 
         scanf("%d",&a);
         ar[0]=a;
         ar[n]=ar[n];
         for(int i =0;i<=x;i++)
         printf("%d\t",ar[i]);
         break;
        }
        case 2:
        {
            int a;
            printf("Enter element to be inserted:");
            scanf("%d",&a);
            ar[x]=a;
            ar[n]=ar[n];
            
           for(int i =0;i<=x;i++)
            printf("%d\t",ar[i]);
            break;
        }
        case 3:
        {  
         int b,i,a;
         printf("Enter the position where you want to insert the element:");
         scanf("%d",&b);
         printf("Enter the value into that position:");
         scanf("%d",&a);
         for(i=x-1;i>=b-1;i--)
            ar[i+1]=ar[i];
         ar[b-1]= a;
         for(i=0;i<=x;i++)
         printf("%d\t",ar[i]);
         break;
        }
        } 
        return 0;
}
