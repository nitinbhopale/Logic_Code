// Problem statement : Accept 2 values from user and perform the addition

// step 1 : Understand the problem statement 
//Conclusion : We have to accept 2 integers and perform its addition.

// step 2 : Write the Algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Creat one variable to store the result named as Ans
        Perform Addition of no1 and no2 , store the result in Ans
        Diplay the result from Ans to the user 
    STOP
*/

// step 3 : Decide the programming language (C/C++/Java/Python)
// We Select C programming

// Step 4 : Write the program using C 

#include<stdio.h>

int main()
{
    int i,j,k;

    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter second number : \n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);
    return 0;
}