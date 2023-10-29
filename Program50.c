/*

*/

#include<stdio.h>
#include<stdlib.h>

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
    printf("The Numbers are : \n");
    for(int i = 0;i<iCount;i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    free(ptr); 
    return 0;
}