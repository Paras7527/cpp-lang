#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}
int main()
{   
    int iFrequency = 0;

    printf("Enter the Frequency:");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    
    return 0;
}