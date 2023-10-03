// Accept the Percentage from user and display the grade of student 
/*
35-49 Pass
50-59 Second class
60-74 first class
75> first class with disticnation\

*/ 


#include<stdio.h>

void DisplayClass(float iValue1)
{
    if(iValue1>100)
    {
        printf("Invalid Percentage\n");
    } else {
        if(iValue1<35)
        {
            printf("Failed...");
        }
        else if(iValue1>35 && iValue1<49)
        {
            printf("Pass (Third Class)");
        } else if(iValue1>49 && iValue1<59)
        {
            printf("Second Class\n");
        } else if(iValue1>59 && iValue1<74)
        {
            printf("First Class\n");
        } else{
            printf("First Class with Distinction\n");
        }
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter Your Percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);


    return 0;
}

