// print "Jay Ganesh " 5 times on screen
#include<stdio.h>

void Display()
{   
    register int iCnt = 0;
    //    1         2           3
    for(iCnt = 0; iCnt <= 4; iCnt++)
    {
       printf("Jay Ganesh...\n");   // 4    
    }
       
}

int main()
{
    Display();

    return 0;
}