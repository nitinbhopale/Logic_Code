// Accept the input from user and print its factor
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d are : \n",iNo);
    for(iCnt = 1;iCnt<=iNo/2;iCnt++) // n/2 
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}

// Time Complexity : O(N/2) 

/*
    O(N)
    O(2N)
    O(N^2)
    O(N^3)
    O(N/2)
    O(N/4)
*/