/*
    Accept n number from user and return largest element from that

*/

#include<stdio.h>
#include<stdlib.h>

int LargestElement(int Arr[], int iSize)
{
    int iMax = Arr[0];
    
    for(int i = 1;i < iSize;i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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
    
    iRet = LargestElement(ptr, iCount);

    printf("The Largest Element is : %d",iRet);
    free(ptr);

    return 0;
}