/*
    Accept n number from user and display even numbers
*/
#include<stdio.h>
#include<stdlib.h>

// void DisplayNumbers(int *Arr, int iSize)
int EvenCount(int Arr[], int iSize)
{
    int iEvenCnt = 0;
    
    for(int iCnt = 0; iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
          iEvenCnt++;
        }
    }
    printf("\n");
    return iEvenCnt;
}
int main()
{
    int iCount = 0;

    int *ptr = NULL;

    int iRet = 0;

    printf("Enter the number of element you want to store\n");

    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);
    printf("Enter %d  Values\n",iCount);
    for(int iCnt = 0;iCnt<iCount;iCnt++)
    {
        printf("\n Enter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = EvenCount(ptr, iCount);

    printf("The Even number count is : %d\n",iRet);
    free(ptr);

    return 0;
}