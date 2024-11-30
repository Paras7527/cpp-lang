#include<iostream>
using namespace std;

class Demo
{
    public:
    int *Arr;
    int iSize;

    Demo(int A)
    {
        iSize=A;
        Arr=new int[iSize];     //Dynamic memory allocation...
    }
    ~Demo()
    {
        delete []Arr;           //Dynamic memory deallocation
    }

    void Accept()
    {
        int iCnt=0;
        cout<<"Accept the values:\n";
        for(iCnt=1;iCnt<=iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
        cout<<"\n";
    }
    void Display()
    {
        int iCnt=0;
        cout<<"Accept the values:\n";
        for(iCnt=1;iCnt<=iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }

    int CountEven()
    {
        int iCnt=0;
        int Count=0;
        for(iCnt=1;iCnt<=iSize;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                Count++;
            }
        }
        return Count;
        cout<<"\n";
    }
    
};

int main()
{
    int iLength=0, iRet=0;

    cout<<"Enter number of elements:";
    cin>>iLength;

    Demo dobj(iLength);

    dobj.Accept();
    dobj.Display();

    iRet=dobj.CountEven();
    cout<<"Count is:"<<iRet;

    return 0;
}