#include<stdio.h>
//Call by Address
void strtoggleX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("String after updation is:%s\n",Arr);

    return 0;
}