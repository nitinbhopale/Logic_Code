#include<stdio.h>

int Count(char str[], char ch)
{
    int iFrequecy = 0;
    while(*str != '\0')
    {
        if(*str==ch)
        {
            iFrequecy++;
        }
        str++;
    }
    return iFrequecy;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

   

    printf("Enter the String : \n");
    scanf("%[^\t]s",Arr);

     printf("Enter the character\n");
    scanf("%c",&cValue);
    

    iRet = Count(Arr, cValue);

    printf("Frequency of letter is  is : %d\n",iRet);

    return 0;
}