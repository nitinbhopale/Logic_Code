#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;
    while(iNo!=0)
    {
        iNo = iNo/10;
        iCnt++;

    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("The Digit are : %d\n",iRet);
    return 0;
}