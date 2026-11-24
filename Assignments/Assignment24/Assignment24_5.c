#include<stdio.h>

void StrRevx(char *str)
{
    int iLength = 0;
    int i = 0;
    int temp;
    while(str[iLength] != '\0')
    {
        iLength++;
    } 

    for(i = 0; i < iLength/2; i++)
    {
        temp = str[i];
        str[i] = str[iLength - 1 - i];
        str[iLength - 1 - i] = temp; 
    }
}

int main()
{
    char arr[20];
    
    printf("Enter string");
    scanf("%19[^\n]",arr);

    StrRevx(arr);

    printf("Modified string is %s",arr);

    return 0;
}