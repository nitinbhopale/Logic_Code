// Accept the Percentage from user and display the grade of student 
/*
35-49 Pass
50-59 Second class
60-74 first class
75> first class with disticnation\

*/ 


#include<stdio.h>

// Logical OR || -> If any of the condition is TRUE then it enters inside the if
// Logical AND && -> If all of the condition are TRUE then it enters inside the if

void DisplayClass(float fMarks)
{
    if(fMarks>100 || fMarks<0)
    {
        printf("Invalid Percentage\n");
    } else {
        if((fMarks >=0.0)&&(fMarks<35.00))
        {
            printf("You are Fail..\n");

        }
        else if((fMarks>=35.00)&&(fMarks<50.00))
        {
            printf("Pass (Third Class)\n");
        } else if((fMarks>=50.00) &&(fMarks<60.00) )
        {
            printf("Second Class\n");
        } else if((fMarks >= 60.00)&& (fMarks < 75.00))
        {
            printf("First Class\n");
        } else if((fMarks>=75.00) && (fMarks <= 100.00)){
            printf("First Class with Distinction\n");
        }
    }
}

int main()
{
    float fValue = 0.0f;
    printf("=============================\n");
    printf("Enter Your Percentage\n");

    printf("=============================\n");
    scanf("%f",&fValue);

    printf("=============================\n");
    DisplayClass(fValue);
    
    printf("=============================\n");

    return 0;
}

