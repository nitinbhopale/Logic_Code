// Problem Statement :  Accept the radius of circle from user and calculate it's area.

// Step1 : Understand the problem statement
// Conclusion : We are going to use the formula as PI*R*R

// Step2 : Algorithm
/*
    START
        Accept radius from user and store into RADIUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIUS * RADIUS
        Display the value of Area to the user
    STOP

*/
#include<stdio.h>


//////////////////////////////////////////////////////////
//  
//  Function Name : CalculateArea
//  Description :   It is used to Calculate area of circle
//  Input :         Float
//  Output :        Float 
//  Author Name :   Nitin Sanjay Bhopale
//  Date :          02/10/2023
//
//////////////////////////////////////////////////////////

float CalculateArea(float fValue)
{
   auto float fAns = 0.0f;
   auto float PI = 3.14f;


    fAns = PI * fValue * fValue;

    return fAns;
}

//////////////////////////////////////////////
// 
// Entry Point Function
//
//////////////////////////////////////////////


int main()
{
    auto float fRadius  = 0.0f;
    auto float fArea = 0.0f;
    printf("Enter the Radius of Circle\n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("the Area is : %f",fArea);
    return 0;
}
