// print no of time * on screen

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number you want to print star on screen\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}