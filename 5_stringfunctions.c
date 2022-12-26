//Aim:To make a menu driven program for string copy, concatenation and to find string length.
//Code:

#include <stdio.h>
#include <string.h>

int main() {
    int choice, num, i;
    char s1[20];
    char s2[20];
    char s[20];
    int length=0;
    int j,k;
    char str[100],copy_str[100];
    int l;
    while(1)
    {
        printf("Menu:\n");
        printf("\t1. Concatenate Strings\n");
        printf("\t2. Find Length\n");
        printf("\t3. Copy\n");
        printf("\t4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            printf("Enter string 1:");
            scanf("%s", s1);
            printf("Enter string 2:");
            scanf("%s", s2);
            while (s1[length] != '\0') {++length;}
            for (j = 0; s2[j] != '\0'; ++j, ++length) {s1[length] = s2[j];}
            s1[length] = '\0';
            printf("After concatenation: ");
            puts(s1);
            break;
            
            case 2:
            printf("Enter string :");
            scanf("%s", s);
            for (k=0;s[k]!='\0';++k)
            s[k]='\0';
            printf("Length of String: %d\n\n",k);
            break;
            
            case 3:
            printf("Enter string :");
            scanf("%s",str);
            for(l = 0; str[l] != '\0'; l++)
            copy_str[l] = str[l];
            copy_str[l] = '\0';
            printf("Copied string = %s\n\n",copy_str);
            break;
            
            case 4:
            printf("Code terminated");
            exit(0);
}
    return 0;
}
}
