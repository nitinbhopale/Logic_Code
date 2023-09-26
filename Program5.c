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
// addition is function which accepts 2 parameters as integers and it returns integer
int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1+iNo2;
    return iSum;
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns=Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iAns);
    return 0;
}

// step 5 : Test the code
/*
Test case 1 :
input : 10 11
output : 21

Test case 2 :
input : 10 0 
output  10

Test case 3 :
input : 12 -6 
output:  6

Test case  4:
input :  -6 -5 
output : -11


*/