// accept the number from user and return the addition of factor

#include<stdio.h>

int FactorAddition(int iNo)
{
    int Ans = 0;
    int i = 0;
    for(i=1;i<=(iNo/2);i++)
    {
        if(iNo%i==0)
        {
            Ans += i;
        }
    }
    return Ans;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = FactorAddition(iValue);

    printf("The Addition of its factor is : %d\n",iRet);
    return 0;
}