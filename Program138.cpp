#include<iostream>
using namespace std;

class Digits
{
    private:
        int iNo;
    public:
        Digits(int x)
        {
            iNo =  x;
        }
    
};
int main()
{
    int iValue = 0, iRet = 0; 

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;
    
    Digits *dobj = new Digits(iValue); 


    delete nobj;
    return 0;
}