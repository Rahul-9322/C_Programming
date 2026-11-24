#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int icnt = 0;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
       if(str[icnt] == ch)
       {
         return icnt;
       } 
      
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string");
    scanf("%[^\n]s",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}