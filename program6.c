/*
        [IMPORTANT STEPS TO WRITE PROGRAM]
        Step 1: Understand problem statement
        Step 2: Write the Algorithm
        Step 3: Decide the programming language
        Step 4: Write the program
        Step 5: Test the program


        Problem Statement:
        Write a program which is used to perform ADDITION of two numbers.

        Step1:Understand the problem statement :
        User is going to enter the data in decimal format.
        If entered data is negative we have to convert it to positive value.

        Step2:Write the algoritm:
        START
        Accept first input
        Accept second input
        If any of the input is negative convert it into postive
        perform the addition of that accepted values
        Display the addition
        STOP

        Step 3: Decide the programming language
        According to the problem statement we select the C Programming Language.

       Step 4: Write the program

*/


#include<stdio.h>
int main(){
    float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;

    printf("Enter first number:");
    scanf("%f",&fNo1);

    printf("Enter second number:");
    scanf("%f",&fNo2);   

    fAns=fNo1+fNo2;

    printf("Addition is:%f",fAns);

    return 0;
}