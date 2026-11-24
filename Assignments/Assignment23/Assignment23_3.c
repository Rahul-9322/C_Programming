#include<stdio.h>

void strtogglex(char *str)
{
    int icnt = 0;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] >= 'A' && str[icnt] <= 'Z')
        {
            str[icnt] = str[icnt] + 32;
        }
        else if(str[icnt] >= 'a' && str[icnt] <= 'z')
        {
            str[icnt] = str[icnt] - 32;
        }
    }
}
int main()
{
    char arr[100];

    printf("Enter string");
    scanf("%[^\n]s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0;
}