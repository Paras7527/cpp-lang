#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet=CountCapital(Arr);
    printf("Number of capital are:%d\n",iRet);

    return 0;
}