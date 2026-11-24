#include<stdio.h>

void strlwrx(char *str)
{
    int icnt = 0;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] >= 'A' && str[icnt] <= 'Z')
        {
          str[icnt] = str[icnt] + 32;  
        }
        
    }

}
int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s",arr);

    strlwrx(arr);
    printf("Modified string is %s",arr);

    return 0;
}