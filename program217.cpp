#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask=0x10000;
    int iResult=0;

    iResult=iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
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
        cout<<"17th Bit is OFF\n";
    }
    else
    {
        cout<<"17th Bits is ON\n";
    }
    
    return 0;
}

//0000  0000    0000    0001    0000    0000    0000    0000  
//0     0       0       1       0       0       0       0  
//: 0x10000