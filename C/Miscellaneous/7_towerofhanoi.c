//Aim:To implement Tower Of Hanoi.
//Code

#include <stdio.h>
void towers(int, char, char, char);
int main()
{
    int disk;
    printf("Enter the number of disks : ");
    scanf("%d", &disk);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(disk, 'A', 'C', 'B');
    return 0;
}
void towers(int disk, char source, char dest, char aux)
{
    if (disk == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", source, dest);
        return;
    }
    towers(disk - 1, source, aux, dest);
    printf("\n Move disk %d from peg %c to peg %c", disk, source, dest);
    towers(disk - 1, aux, dest, source);
}
