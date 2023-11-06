/* 
    Pattern :   iRow = 6
                iCol = 6 

    *   *   *   *   *   *
    *                   *
    *                   *
    *                   *
    *                   *
    *   *   *   *   *   *
*/

#include<stdio.h>

void Display(int iRows, int iCols)
{
    for(int i = 1 ;i <= iRows; i++)
    {
        for(int j = 1; j<=iCols ;j++)
        {
            if((i==1) || (i==iRows) || (j==1 ) || (j==iCols))
            {
                printf("*\t");
            }
            else 
            {
                printf(" \t");
            }
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