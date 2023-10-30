#include<stdio.h>
#include<stdlib.h>


int EvenAddition(int Arr[], int iSize)
{
    int iEvenSum = 0;
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenSum += Arr[iCnt];
        }
        
    }
    return iEvenSum;
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
    
    iRet = EvenAddition(ptr,iCount);

    printf("Even Element Addition is : %d",iRet);
    free(ptr);

    return 0;
}