// accept the number from user and check whether it prime or not 
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int i = 0;
    int bValue = false;
    for(i=2;i<(iNo/2);i++)
    {
        if(iNo%i!=0)
        {
           bValue = true;
        }
        else {
            bValue = false;
            break; 
        }
    }
    return bValue;
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