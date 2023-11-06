#include<stdio.h>

int CountVowels(char str[])
{
    int Count = 0;
    while(*str != '\0')
    {
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
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

    iRet = CountVowels(Arr);

    printf("Frequency of Vowel letter is : %d\n",iRet);

    return 0;
}