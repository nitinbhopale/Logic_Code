/* 

    Input : 4
    Output : 4  3   2   1    
     
*/

#include<stdio.h>

void Display(int iNo)
{
    
    for(int i= iNo;i>=0;i--)
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