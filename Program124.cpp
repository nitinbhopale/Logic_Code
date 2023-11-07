#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    public:
        Number(int x)
        {
            iNo =  x;
        }
    public:
        int Factorial()
        {
            int iFact = 1;
            for(int i = 1;i<=iNo;i++)
            {
                iFact = iFact * i;
            }
            return iFact;
        }
};
int main()
{
    int iValue = 0, iRet = 0; 

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;
    
    Number *nobj = new Number(iValue); 

    iRet = nobj->Factorial();
    cout<<"Factorial is :"<<iRet<<endl;

    delete nobj;
    return 0;
}