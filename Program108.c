#include<stdio.h>

int CountSmallCharacter(char str[])
{
    int Count = 0;
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
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

    iRet = CountSmallCharacter(Arr);

    printf("Frequency of small letter is : %d\n",iRet);

    return 0;
}