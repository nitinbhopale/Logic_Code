/* 
    Pattern :
                *   *   *   *
                *   *   *   *
                *   *   *   *    
     
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    
    for(int i = 1 ;i <= iRow; i++)
    {
        for(int j = 1; j<=iCol ;j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the Number of Rows\n");
    scanf("%d",&iNo1);

    printf("Enter the Number of Columns\n");
    scanf("%d",&iNo2);

    Display(iNo1, iNo2);
    return 0;
}