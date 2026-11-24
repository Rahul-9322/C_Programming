#include<stdio.h>

void struprx(char *str)
{
   int icnt = 0;
   for(icnt = 0; str[icnt] != '\0'; str++)
   {
      if(str[icnt] >= 'a' && str[icnt] <= 'z')
      {
        str[icnt] = str[icnt] - 32;
      }
   }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0;
}