#include<stdio.h>
//Call by Address
void struprX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("String after updation is:%s\n",Arr);

    return 0;
}