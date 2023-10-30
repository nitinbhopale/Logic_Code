/*
    Accept n number from user and return smalles element from that

*/

#include<stdio.h>
#include<stdlib.h>

int SmallestElement(int Arr[], int iSize)
{
    int iMin = Arr[0];
    
    for(int i = 1;i < iSize;i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin ;
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
    
    iRet = SmallestElement(ptr, iCount);

    printf("The Smallest Element is : %d",iRet);
    free(ptr);

    return 0;
}