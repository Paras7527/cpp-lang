#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask=0x2;
    int iResult=0;

    iResult=iNo & iMask;
    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number: \n";
    cin>>iValue;

    bRet=CheckBit(iValue);

    if(bRet == 0)
    {
        cout<<"Bit is OFF\n";
    }
    else
    {
        cout<<"Bit is ON\n";
    }
    
    return 0;
}