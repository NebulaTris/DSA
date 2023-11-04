//Aim:Write a program to implement traversal, insertion ,deletion and searching operations in Circular Linked List.
//Code

#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
}; 
struct node *head;  
void beg_insert ();   
void last_insert ();  
void begin_delete();  
void last_delete();  
void display();  
void search();  
void main ()  
{  
    int choice =0;  
    while(choice != 7)   
    {  
        printf("\n****OPERATION MENU****");  
        printf("\n1.Insertion at beginning\n2.Insertion at last\n3.Deletion from Beginning\n4.Deletion from last\n5.Searching \n6.Traversal\n7.Exit\n");  
        printf("\nEnter your choice:");         
        scanf("\n%d",&choice);  
        switch(choice)  
        { 
            case 1:  
            beg_insert();      
            break;  
            case 2:  
            last_insert();         
            break;  
            case 3:  
            begin_delete();       
            break;  
            case 4:  
            last_delete();        
            break;  
            case 5:  
            search();         
            break;  
            case 6:  
            display();        
            break;  
            case 7:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice.");  
        }  
    }  
}  
void beg_insert()  
{  
    struct node *ptr,*temp; int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data: ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nNode inserted.");  
    }  
}  
void last_insert()  
{  
    struct node *ptr,*temp;   int item;  ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter Data:");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   ptr -> next = head;  
        }     
        printf("\nNode inserted.");  
    }  
}  
void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nNode deleted.");  
    }  
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nNode deleted.");  
    }  
}  
void last_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nNode deleted");  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nNode deleted");  
  
    }  
}  
void search()  
{  
    struct node *ptr;  int item,i=0,flag=1;  ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search: \n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("Item found at location: %d",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf("Item found at location: %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("Item not found.\n");  
        }  
    }            
}  
void display()  
{  
    struct node *ptr;  ptr=head;  
    if(head == NULL)  
    {  
        printf("\nNothing to print");                                                             
    }     
    else 
    {  
        printf("\n Printing values: \n");  
        while(ptr -> next != head)  
        {  
            printf("%d", ptr -> data);  
            ptr = ptr -> next;  
            printf("==>");
        }  
        printf("%d\n", ptr -> data);  
    }  
}
Outputs:
