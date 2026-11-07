#include<stdio.h>

int CountOdd(int iNo)
{
    int icnt = 0;
    int no = 0;
    while(iNo != 0)
    {
        no = iNo % 10;
        if((iNo % 2) == 1)
        {
            icnt++;
        }
        iNo = iNo / 10;
    }
    return icnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number");
  scanf("%d",&iValue);
  
  iRet = CountOdd(iValue);

  printf("%d",iRet);

  return 0;
}