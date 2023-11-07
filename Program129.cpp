/*


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