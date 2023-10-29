#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    
    while (iNo!=0)
    {
        iDigit = iNo%10;
        
        iNo = iNo/10;
        
        iRev = iRev * 10 +iDigit;
    }
    return iRev;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse Number is : %d\n",iRet);
    return 0;
}