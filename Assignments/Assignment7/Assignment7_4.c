#include<stdio.h>

void OddDisplay(int iNo)
{
    int icnt = 0; 
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if((icnt % 2)!=0)
        {
             printf("%d\t",icnt);
        }
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
   
    OddDisplay(iValue);
    return 0;
}