/*
    Accept n number from user and return average
*/

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iSize)
{
    float Average = 0.0f;
    int iSum = 0;
    for(int iCnt = 0;iCnt<iSize ;iCnt++)
    {
        iSum += Arr[iCnt];
    }

    Average = (float )  iSum / iSize;
    return Average;
}

int main()
{
    int iCount = 0; 
    
    int *ptr = NULL;

    float fRet = 0.0f;

    printf("Enter number of element that you want to enter :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter %d Element\n",iCount);

    for(int iCnt = 0 ;iCnt < iCount ; iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr, iCount);

    printf("Average is : %.2f",fRet);

    free(ptr);
    return 0;
}