// Accept two number from user and display maximum number

#include<iostream>
using namespace std;

int Maximum(int No1, int No2)
{
  if(No1 > No2)
  {
    return No1;
  }
  else
  {
    return No2;
  }
}

int main()
{
  int Value1 = 0, Value2 = 0, iRet = 0;

  cout<<"Enter first number: ";
  cin>>Value1;

  cout<<"Enter second number: ";
  cin>>Value2;

  iRet = Maximum(Value1, Value2);
  cout<<"Maximum Number: "<<iRet;

  return 0;
}
