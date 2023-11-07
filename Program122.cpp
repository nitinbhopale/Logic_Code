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
    // Logic
    
};


int main()
{
    int iValue = 0, iRet = 0; 

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;
    
    Number nobj(iValue);

   
    return 0;
}