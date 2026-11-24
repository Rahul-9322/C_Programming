#include<stdio.h>

int CountChar(char *str,char ch)
{
    int icnt = 0;
    int counter = 0;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] == ch)
        {
           counter++;
        }
    } 
    return counter;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string");
    scanf("%19[^'\n']",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}