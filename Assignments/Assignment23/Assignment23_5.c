#include<stdio.h>

int CountWhite(char *str)
{
   int icnt = 0;
   int countspace = 0;
   for(icnt = 0; str[icnt] != '\0'; icnt++)
   {
      if(str[icnt] == ' ')
      {
        countspace++;
      }
   } 
   return countspace;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}