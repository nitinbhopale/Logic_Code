#include<stdio.h>

int CountDigit(char str[])
{
    int Count = 0;
    while(*str != '\0')
    {
        if(*str>='0' && *str<='9' )
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

    iRet = CountDigit(Arr);

    printf("Frequency of Capital letter is : %d\n",iRet);

    return 0;
}