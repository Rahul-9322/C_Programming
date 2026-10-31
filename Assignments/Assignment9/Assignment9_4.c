#include<stdio.h>

int OddFactorial(int iNo)
{
    int fact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        if((iNo % 2)!= 0)
        {
            fact = fact * iNo;
        }
        iNo--;
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}