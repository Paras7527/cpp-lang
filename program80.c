#include<stdio.h>
#include<stdlib.h>
int Addition(int ptr[],int iSize)
{
    int iSum=0,iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+ptr[iCnt];
    }
    return iSum;
}
int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0,iRet=0;

    //Step1 : Accept the number of elements from user
    printf("Enter number of elements:\n");
    scanf("%d",&iLength);

    //Step2 : Allocate the memory dynamically
    ptr=(int *)malloc(iLength * sizeof(int));

    //Step3 : Accept the values and store into the Dynamic memory
    printf("Enter the elements:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    //Step4 : Perform the operations (Logic)
    iRet=Addition(ptr,iLength);
    printf("Addition is: %d",iRet);

    //Step5 : Deallocate the memory
    free(ptr);
    return 0;
}


/*
    Step1 : Accept the number of elements from user

    Step2 : Allocate the memory dynamically

    Step3 : Accept the values and store into the Dynamic memory

    Step4 : Perform the operations (Logic)

    Step5 : Deallocate the memory
*/