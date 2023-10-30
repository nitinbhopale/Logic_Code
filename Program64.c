/*
    Accept n number from user and return smalles element from that

*/

#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iSize)
{
    int iMin = Arr[0];
    int iMax = Arr[0];
    for(int i = 1;i < iSize;i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    
    printf("The Maximum number is : %d \n",iMax);
    printf("The Minimum number is : %d\n",iMin);
    
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
    
    MaxMin(ptr, iCount);
    
    free(ptr);

    return 0;
}