/*

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    for(int i=0;i<iSize;i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;

    printf("Enter the number you want to store\n");
    scanf("%d",&iCount);

    int *ptr = NULL;
    ptr = (int *)malloc(iCount * sizeof(int)); 

    printf("Enter %d Elements\n",iCount);
    for(int i = 0;i<iCount;i++)
    {
        scanf("%d",&ptr[i]);
    }
  
    Display(ptr, iCount); 
    
    return 0;
}