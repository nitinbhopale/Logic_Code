// accept marks and out off from student and calculate the percentage


#include<stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    float Percentage = 0.0;

    Percentage = ((float)iMarks/(float)iTotal) * 100;

    return Percentage;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Enter the Marks You Obtained\n");
    scanf("%d",&iValue1);

    printf("Enter the Out off Marks\n");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1, iValue2);

    printf("Your Percentage = %f",fRet);

    return 0;
}