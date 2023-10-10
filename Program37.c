// Accept the number from user and check whether 
// number is perfect or not 
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iSum = 0;
    int i = 0;
    for(i = 1;i<=(iNo/2);i++)
    {
        if(iNo%i==0)
        {
            iSum += i;
        }
    }
    if(iSum==iNo)
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
    int iValue = 0; 
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("Number is Perfect\n");
    } 
    else 
    {
        printf("Number is not Perfect\n");
    }
    return 0;
}
