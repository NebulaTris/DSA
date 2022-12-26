//Aim:To implement push and pop in C on an user given stack.
//Code:

#include<stdio.h>
#include<stdlib.h>
#define size 5 
int Top=-1, inp_array[size];
void Push();
void Pop();
int main()
{
	int choice;
	while(1)	
	{
		printf("Operations:");
		printf("\n1.Push \n2.Pop\n3.End");
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: exit(0);
			default: printf("\nInvalid choice!!");
		}
	}
}
void Push()
{
	int x;
	if(Top==size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		inp_array[Top]=x;
		{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
	printf("Elements present in the stack after pushing element: \n");
	for(int i=Top;i>=0;--i)
		printf("%d\n",inp_array[i]);
	}
          }
	}
}
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top=Top-1;
	{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
	printf("\nElements present in the stack after popping the element:\n");
	for(int i=Top;i>=0;--i)
		printf("%d\n",inp_array[i]);
	}
          }
	}
}
