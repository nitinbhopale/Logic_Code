// accept 3 numbers from user and return largest from it 

#include<stdio.h>
int maximum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1>=iNo2) && (iNo1>=iNo3))
    {
        return iNo1;

    } 
    else if((iNo2>=iNo1) && (iNo2>=iNo3))
    {
        return iNo2;
    } 
    else {
        return iNo3;
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    int iRet = 0;

    printf("Enter the first Number\n");
    scanf("%d",&iNo1);

    printf("Enter the second Number\n");
    scanf("%d",&iNo2);

    printf("Enter the third Number\n");
    scanf("%d",&iNo3);

    iRet = maximum(iNo1,iNo2,iNo3);

    printf("Largest number is : %d",iRet);

    return 0;
}