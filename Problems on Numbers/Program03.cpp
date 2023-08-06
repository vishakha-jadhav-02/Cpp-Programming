// Accept two numbers from user and display maximum number

#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo1;
        int iNo2;

        Number(int X, int Y)
        {
            iNo1 = X;
            iNo2 = Y;
        }

        int Maximum()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};

int main()
{
    int iRet = 0;
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter first number: ";
    cin>>iValue1;

    cout<<"Enter second number: ";
    cin>>iValue2;

    Number nobj(iValue1, iValue2);

    iRet =nobj.Maximum();

    cout<<"Maximum number is :"<<iRet;

    return 0;
}
