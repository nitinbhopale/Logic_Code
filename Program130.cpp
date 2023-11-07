/*
    iRow = 5
    iCol = 5

    $   *   *   *   *
    *   $   1   1   *
    *   0   $   1   *
    *   0   0   $   *
    *   *   *   *   $

*/
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;
    public:
        Pattern(int X, int Y)
        {
            this->iRow = X;
            this->iCol = Y;
        }

        void Display()
        {
            for(int i = 1;i<=iRow;i++)
            {
                for(int j =1;j<=iCol;j++)
                {
                    if(i==j)
                    {
                        cout<<"$\t";
                    }else if(i==1 || j==1 || i==iRow || j==iCol)
                    {
                        cout<<"*\t";
                    }
                    else if(j>i)
                    {
                        cout<<"1\t";
                    }
                    else 
                    {
                        cout<<"0\t";
                    }
                }
                cout<<endl;
                cout<<endl;

            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the Numbers of Rows : "<<endl;
    cin>>iValue1;
    cout<<"Enter the Numbers of Columns : "<<endl;
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);

    pobj->Display();

    delete pobj;
    
    return 0;
}