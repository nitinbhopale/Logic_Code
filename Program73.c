/* 

    Input  : 4
    Output : a b c d    
     
*/

#include<stdio.h>

void Display(int iNo)
{
    char ch = 'a';

    for(int i=1;i<=iNo;i++)
    {
        printf("%c\t",ch);
        ch++;
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