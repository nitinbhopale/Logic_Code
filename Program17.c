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
    switch (iStd)
    {
    case 1:
        printf("You are in 1st Standard and Your Exam at 08.00AM\n");
        break;
    case 2:
        printf("You are in 2nd Standard and Your Exam at 09.00AM\n");
        break;
    case 3:
        printf("You are in 3rd Standard and Your Exam at 10.00AM\n");
        break;
    case 4:
        printf("You are in 4th Standard and Your Exam at 11.00AM\n");
        break;
    case 5:
        printf("You are in 5th Standard and Your Exam at 12.00 Noon \n");
        break;
    default:
        printf("Invalid Standard\n");
        break;
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