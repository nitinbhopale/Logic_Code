#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;
    public:
        String()
        {
            iSize = 20;
            str = new char[iSize];
        }
        String(int X)
        {
            iSize = X;
            str = new char[iSize];
        }
        ~String()
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the String : "<<endl;
            cin.getline(str,iSize);
        }
        void Display()
        {
            cout<<"String is : "<<str<<endl;
        }

        int CountCapital()
        {
            int iCnt = 0;
            char *temp = str;
            while(*temp != '\0')
            {
                if((*temp >= 'A') && (*temp <= 'Z'))
                {
                    iCnt++;
                }
                temp++;
            }
            return iCnt;
        }
};
int main()
{
    String *sobj1 = new String(30);
    

    sobj1->Accept();
    sobj1->Display(); 

    int iRet = 0;

    iRet = sobj1->CountCapital();
    cout<<"The Capital Letter is : "<<iRet<<endl;
    
    sobj1 -> Display();
    delete sobj1;
    return 0;
}