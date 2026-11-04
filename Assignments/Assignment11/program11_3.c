#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int i = 0 , sum = 0;
  for(i = iStart; i <= iEnd; i++)
  {
    if(i < 0) 
    {
       printf("Invalid range");
    }
    
    else if(i > 0)
    {
        sum = sum + i;
    }
  }
  printf("sum = %d\n",sum);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point");
    scanf("%d",&iValue1);

    
    printf("Enter starting point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}