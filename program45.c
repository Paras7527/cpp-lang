//check whether(BOOL) number is divisible by 3 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    int iResult=0;
    iResult=iNo%3  &&  iNo%5;       //if(((iNo%3)==0)&&(((iNo%5)==0)))
    if(iResult==0)
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
    int iValue=0;
    bool bFlag=false;

    printf("Enter number");
    scanf("%d",&iValue);

    bFlag=CheckDivisible(iValue);
    if(bFlag==true){
        printf("%d is divisible by 3 & 5",iValue);
    }
    else{
        printf("%d is not divisible by 3 & 5",iValue);
    }
    return 0;
}