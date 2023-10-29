/*
    Check the number is palindrome or not 
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPalidrome(int iNo)
{
   
    int iRev = 0;
    int iDigit = 0;
    int iCopy = iNo;
    while (iNo!=0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;

        iRev = iRev * 10 + iDigit;
    }
    return (iRev == iCopy);
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = CheckPalidrome(iValue);

    if(bRet)
    {
        printf("%d is Palindrome number\n",iValue);
    } 
    else 
    {
        printf("%d is not Palindrome number\n",iValue);
    }
    return 0;
}