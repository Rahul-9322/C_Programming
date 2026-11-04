#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int i = 0,sum = 0;
    
    for(i = iStart; i <= iEnd; i++)
    {
        if((i % 2) == 0)
        {
           sum = sum + i;
        }
    } 
    return sum;


}
int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter starting point");
    scanf("%d",&iValue2);
    if(iValue1 < 0 || iValue2 < 0)
    {
        printf("Invalid range");
    }
    else
    {
        iRet = RangeSumEven(iValue1,iValue2);
        printf("Addition is :%d",iRet);
    }
    return 0;
}