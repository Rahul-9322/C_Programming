#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char ch)
{
    int icnt = 0;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] == ch)
        {
            return TRUE;
        }
       
    }
    return FALSE;
}


int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the string");
    scanf("%99[^\n]",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

      if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}