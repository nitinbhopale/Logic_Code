/*
    Accept n number from user and display even numbers
*/
#include<stdio.h>
#include<stdlib.h>

// void DisplayNumbers(int *Arr, int iSize)
void EvenDisplay(int Arr[], int iSize)
{
    printf("\nElements of the array are : \n");
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
         printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}
int main()
{
    int iCount = 0;

    int *ptr = NULL;

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
    EvenDisplay(ptr, iCount);

    free(ptr);

    printf("Dynamic memory gets deallocated succesfully..\n");
    return 0;
}