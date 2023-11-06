#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&ch);

    printf("ASCII Value of the character in DECIMAL is : %d\n",ch);
    printf("ASCII Value of the character in OCTAL is : %o\n",ch);
    printf("ASCII Value of the character is HEXADECIMAL : %x\n",ch);

    return 0;
}