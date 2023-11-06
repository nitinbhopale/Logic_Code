#include<stdio.h>

void Replace(char str[])
{
    while(*str!='\0')
    {
        if(*str=='a'|| *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            *str='_';
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr);

    Replace(Arr);

    printf("Updated string is : %s\n",Arr);
    return 0;
}