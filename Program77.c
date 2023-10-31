/* 

    Input  : 4
    Output : A B C D     
     
*/

#include<stdio.h>

void Display(int iNo)
{
    char ch = '\0';

    for(int i=1, ch = 'A'; i<=iNo; i++, ch++)
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