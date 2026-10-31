#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <= abs(iNo); icnt++)
    {
        printf("*\t");
    }
    for(icnt = 1; icnt <= abs(iNo); icnt++)
    {
        printf("#\t");
    }
    

}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}