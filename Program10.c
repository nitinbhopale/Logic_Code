//Problem Statement :  Accept one value of from user and return it's cube

#include<stdio.h>
long int CalculateCube(int iValue)
{
    auto long int iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;
}

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter the Number\n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("The Cube is : %ld",iAns);
    return 0;
}