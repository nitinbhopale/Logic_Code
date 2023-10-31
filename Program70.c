/* 
    Input : 4
    Output : -4 -3 -2 -1 0 1 2 3 4      
     
*/

#include<stdio.h>

void Display(int iNo)
{
    
    for(int i=(0-iNo);i<=iNo;i++)
    {
        printf("%d\t",i);
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