#include<stdio.h>

int CountA(char str[])
{
    int iFrequecy = 0;
    while(*str != '\0')
    {
        if(*str=='a')
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
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

    iRet = CountA(Arr);

    printf("Count of A letter is  is : %d\n",iRet);

    return 0;
}