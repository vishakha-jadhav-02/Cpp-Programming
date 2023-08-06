// Accept two numbers from user and display maximum number

#include<iostream>
using namespace std;

class Number
{
    public:
        int Maximum(int iNo1, int iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    Number nobj;

    cout<<"Enter first number: ";
    cin>>iValue1;

    cout<<"Enter second number: ";
    cin>>iValue2;  

    iRet =nobj.Maximum(iValue1, iValue2);
    cout<<"Maximum number is :"<<iRet;

    return 0;
}
