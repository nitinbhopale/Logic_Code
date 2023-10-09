// Accept the number from user and print the natural number upto that number

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    for(i = 1;i<=iNo;i++)
    {
        printf("=>'%d'<=",i);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Value\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}