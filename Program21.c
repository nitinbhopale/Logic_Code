// accept 3 numbers from user and return average

#include<stdio.h>
float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0f;
    fAns = ((float)(iNo1 + iNo2 + iNo3)/3);
    return fAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    float fRet = 0.0f;

    printf("Enter the First Number\n");
    scanf("%d",&iNo1);

    
    printf("Enter the Second Number\n");
    scanf("%d",&iNo2);

    
    printf("Enter the Third Number\n");
    scanf("%d",&iNo3);

    fRet = Average(iNo1,iNo2,iNo3);

    printf("Average is : %f",fRet);

    return 0;
}