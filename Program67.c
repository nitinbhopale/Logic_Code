/* 
    Accept the number from user 
    n = 6              
    Pattern : * * * * * * 
*/

#include<stdio.h>

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        printf("*\t");
    } 
}

int main()
{
    int iValue = 0;
    printf("Enter the Count\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}