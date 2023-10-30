

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int Element , int iSize)
{
    int iFrequency = 0;
    for(int i=0;i<iSize;i++)
    {
        if(Element == Arr[i])
        {
            iFrequency++;
        }
    }
    return iFrequency ;
}
int main()
{
    int iCount = 0;

    int Element = 0;
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
    
    printf("The Element you want to search\n");
    scanf("%d",&Element);
    iRet = Frequency(ptr,Element, iCount);

    printf("The Frequency of %d is : %d", Element, iRet);
    free(ptr);

    return 0;
}