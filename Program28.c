// Accept the number from user and print the natural number upto that number

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number of times you want to display Hello on screen\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}