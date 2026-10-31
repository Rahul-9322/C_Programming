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
int EvenFactorial(int iNo)
{ 
  int fact = 1;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo > 0)
  {
    if((iNo % 2) == 0)
    {
        fact = fact * iNo;
    }
     iNo--;
    
  }
  return fact;
}

int FactorialDiff(int iNo)
{
    int iEven,iOdd;
    iEven = EvenFactorial(iNo);
    iOdd = OddFactorial(iNo);
    return iOdd - iEven;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}