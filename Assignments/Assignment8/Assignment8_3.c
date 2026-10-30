#include<stdio.h>

int Factorial(int iNo)
{
  
  int inum = 1;
  
  while(iNo > 0)
  {
    inum = inum * iNo;
    iNo --;
  }
  return inum;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);
    return 0;
}