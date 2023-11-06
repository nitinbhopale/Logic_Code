#include<stdio.h>

int CountSpace(char str[])
{
    int Count = 0;
    while(*str != '\0')
    {
        if(*str==' ')
        {
            Count++;
        }
        str++;
    }
    return Count;
}
int main()
{
    char Arr[20];
    
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

    iRet = CountSpace(Arr);

    printf("Frequency of Space letter is : %d\n",iRet);

    return 0;
}