#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;

    while(iNo!=0)
    {
        iSum = iSum + (iNo%10);
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("The Sum is : %d",iRet);

    return 0;
}