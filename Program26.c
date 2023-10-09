//Accept the number from user and print "Jay Ganesh " no times on screen
#include<stdio.h>


int Display(int iNo)
{   
    int iCnt = 0;
    
    //    1         2           3
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Ganesh\t\tJay Shree Mahakal\n"); // 4    
    }
    return 0;
}

int main()
{
    int iValue = 0;
    printf("Enter number of times you want to display Jay Ganesh on Screen\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}