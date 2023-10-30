#include<stdio.h>
#include<stdlib.h>

// void DisplayNumbers(int *Arr, int iSize)
int OddCount(int Arr[], int iSize)
{
    int iOddCnt = 0;
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iOddCnt++;
        }
    }
    printf("\n");
    return iOddCnt;
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
    iRet = OddCount(ptr, iCount);

    printf("The Odd Numbers are : %d",iRet);

    free(ptr);

    return 0;
}