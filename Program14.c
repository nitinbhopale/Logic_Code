// Accept marks and out off from student and calculate the percentage


#include<stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float Percentage = 0.0f;

    if((iMarks < 0) || (iTotal < 0))    // Filter
    {
        printf("Invalid Input\n");
        return Percentage;
    }
    if(iMarks > iTotal) // Filter
    {
        printf("Invalid Input\n");
        return Percentage;
    } 

    Percentage = (((float)iMarks/(float)iTotal) * 100);

    return Percentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the Marks You Obtained\n");
    scanf("%d",&iValue1);

    printf("Enter the total Marks\n");
    scanf("%d",&iValue2);

    
    fRet = CalculatePercentage(iValue1, iValue2);
    
    printf("Your Percentage = %f\n",fRet);

    return 0;
}