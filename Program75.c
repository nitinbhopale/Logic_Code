/* 

    Input  : 4
    Output : a b c d    
     
*/

#include<stdio.h>

void Display(int iNo)
{
    char ch = '\0';

    for(int i=1, ch = 'a'; i<=iNo; i++, ch++)
    {
        printf("%c\t",ch);
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