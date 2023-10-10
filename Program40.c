// accept the number from user and check whether it prime or not 
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    if(iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            bFlag = false;
            break;
        }  
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("Prime Number\n");
    } 
    else
    {
        printf("Not Prime\n");
    } 
    return 0;
}