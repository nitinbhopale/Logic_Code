// Accept two numbers from user and return smallest number 

#include<stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1<iNo2)
    {
        return iNo1;
    }else {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the first Number\n");
    scanf("%d",&iValue1);

    printf("Enter the second Number\n");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1,iValue2);

    printf("Smallest Number is : %d\n",iRet);
    return 0;
}