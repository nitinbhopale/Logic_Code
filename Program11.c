// Problem statement : Accept number from user and check whether it is even or odd
/*
    START
        Accept number from user
        Divide that number by 2
        If Remainder is 0 then display Even
        otherwise display odd
    STOP
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }   
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d,",&iValue);

    bRet = CheckEven(iValue);
    
    if(bRet==true)
    {
        printf("%d is an Even number\n",iValue);
    }else {
        printf("%d is an Odd number\n",iValue);   
    }

    return 0;
}   