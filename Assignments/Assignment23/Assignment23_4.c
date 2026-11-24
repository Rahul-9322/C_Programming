#include<stdio.h>

void DisplayDigit(char *str)
{
    int icnt = 0;
    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] >= '0' && str[icnt] <= '9')
        {
            printf("%c\n",str[icnt]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s",arr);
   
    DisplayDigit(arr);

    return 0;

}