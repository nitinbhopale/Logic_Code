/*
    School Application

    1st Standar exam at - 8.00AM
    2nd Standar exam at - 9.00AM
    3rd Standar exam at - 10.00AM
    4th Standar exam at - 11.00AM
    5th Standar exam at - 12.00 Noon


*/
#include<stdio.h>
void DisplayExamTime(int iStd)
{
    if(iStd==1)
    {
        printf("You are in 1st Standard and Your Exam at 08.00AM\n");
    }
    else if(iStd==2)
    {
        printf("You are in 2nd Standard and Your Exam at 09.00AM\n");

    }
    else if(iStd==3)
    {
        printf("You are in 3rd Standard and Your Exam at 10.00AM\n");

    }
    else if(iStd==4)
    {
        printf("You are in 4th Standard and Your Exam at 11.00AM\n");

    }
    else if(iStd==5 )
    {
        printf("You are in 5th Standard and Your Exam at 12.00Noon\n");

    }
    else
    {
        printf("Invalid Input\n");
    }
}
int main()
{
    int iStd = 0;

    printf("Enter Your Standard\n");
    scanf("%d",&iStd);

    DisplayExamTime(iStd);
    return 0;
}