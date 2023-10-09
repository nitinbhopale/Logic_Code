// Accept the input from user and print its factor
#include<stdio.h>
#include<stdbool.h>

bool ChkFactor(int iNo1, int iNo2)
{
    if((iNo1%iNo2)==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
void Factor(int iNo)
{
    int i = 1;
    for(i = 1;i<=iNo/2;i++)
    {
        if(ChkFactor(iNo,i))
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    Factor(iValue);

}