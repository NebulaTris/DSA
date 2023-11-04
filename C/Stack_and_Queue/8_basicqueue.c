//Aim:To implement enqueue and dequeue on a user given queue.
//Code

#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
void enqueue();  
void dequeue();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n1.Insert an element\n2.Delete an element\n3.Exit\n");  
        printf("\nEnter your choice:");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            enqueue();  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            exit(0);  
            break;  
            default:   
            printf("\nInvalid Choice!\n");  
        }  
    }  
}  
void enqueue()  
{  
    int item;  
    printf("\nEnter the element: ");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    {  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nThe current queue has following elements:");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d",queue[i]);  
        }     
    }  
}
}  
void dequeue()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        {  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nThe current queue has following element:");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d",queue[i]);  
        }     
    }  
}
    }  
}
