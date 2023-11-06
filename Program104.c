#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

    iRet = strlenX(Arr);

    printf("The length of String is : %d\n",iRet);

    return 0;
}