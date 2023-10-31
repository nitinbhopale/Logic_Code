/* 
    Pattern :
                *   *   *   *
                *   *   *   *
                *   *   *   *    
     
*/

#include<stdio.h>

void Display()
{
    
    for(int i = 1 ;i <= 3; i++)
    {
        for(int j = 1; j<=4 ;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display();
    return 0;
}