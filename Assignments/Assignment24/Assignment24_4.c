#include<stdio.h>

int LastChar(char *str,char ch)
{
    int icnt = 0;
    int iRet = -1;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] == ch)
        {
            iRet = icnt;
        }
       
    }
    return iRet;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}