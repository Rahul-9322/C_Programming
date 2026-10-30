#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
     int icnt = 0;
    for(icnt = -abs(iNo); icnt <= abs(iNo); icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}