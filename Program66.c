/*
              1 2 3 4 5 6 
    Pattern : * * * * * * 
*/

#include<stdio.h>

void Display()
{
    for(int i=1;i<=6;i++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}