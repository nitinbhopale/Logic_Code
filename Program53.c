#include<stdio.h>
#include<stdlib.h>

void DisplayNumbers(int Arr[], int iSize)
{
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
}
int main()
{
    int iSize = 0;

    int *ptr = NULL;

    printf("Enter the number of element you want to store\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d the Values\n",iSize);
    for(int iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    DisplayNumbers(ptr, iSize);

    free(ptr);
    return 0;
}