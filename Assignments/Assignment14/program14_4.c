#include<stdio.h>

int SumNonFactors(int iNo)
{
   int icnt = 0;
   int sum = 0;
   for(icnt = 1; icnt <= iNo; icnt++)
   {
    if((iNo % icnt) != 0)
    {
       sum = sum + icnt;
    }
   }
   return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("%d\n",iRet);

    return 0;
}