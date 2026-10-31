#include<stdio.h>
#include<stdlib.h>

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
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0; 
}