#include<stdio.h>
#include<stdlib.h>


int OddAddition(int Arr[], int iSize)
{
    int iOddSum = 0;
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iOddSum += Arr[iCnt];
        }
        
    }
    return iOddSum;
}
int main()
{
    int iCount = 0;

    int *ptr = NULL;

    int iRet = 0;

    printf("Enter the number of element you want to store\n");

    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter %d  Values\n",iCount);
    for(int iCnt = 0;iCnt<iCount;iCnt++)
    {
        printf("\n Enter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = OddAddition(ptr,iCount);

    printf("Odd Element Addition is : %d",iRet);
    free(ptr);

    return 0;
}