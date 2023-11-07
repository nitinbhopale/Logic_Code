#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    int iFact = 1;
    for(int i = 1;i<=iNo;i++)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0; 

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;
    
    iRet = Factorial(iValue);
    cout<<"Factorial is :"<<iRet<<endl;
    return 0;
}