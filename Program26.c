// print "Jay Ganesh " 5 times on screen
#include<stdio.h>

void Display()
{   
    int iCnt = 0;
    int iNo = 8;
    //    1         2           3
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
       printf("Jay Ganesh...\n");   // 4    
    }
       
}

int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    Display();

    return 0;
}