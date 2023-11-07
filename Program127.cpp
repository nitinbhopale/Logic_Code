#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iSize; 
    public:
        Array(int X) // Parametrised Constructor
        {
            this->iSize = X;
            this->Arr = new int[iSize];
        }
        ~Array()    // Destructor
        {
            delete []Arr; 
        }
        
    void Accept()   // Member Function
    {
        int iCnt = 0;
        cout<<"Please Enter the elements : "<<endl;
        for(iCnt = 0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()  // Member function
    {
        int iCnt = 0;
        cout<<"The Array Element is : "<<endl;
        for(iCnt = 0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
    }
    int AdditionEven()
    {
        int iCnt = 0;
        int iSum  = 0;
        for(iCnt = 0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
    }
}; //End of Class

int main()
{
    int iLength = 0;
    int iRet  = 0;
    cout<<"Enter the number of elements that you want to store:"<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->AdditionEven();

    cout<<"Addition of Even number: "<<iRet<<endl;

    delete aobj;
    return 0;
}