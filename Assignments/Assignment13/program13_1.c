#include<stdio.h>

int CountEven(int iNo)
{
    int i = 0;
    int cnt = 0;
    while(iNo != 0)
    {
       
        i = iNo % 10;
        if((i % 2)==0)
        {
           cnt++; 
        }
        iNo = iNo / 10;
    }
     return cnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;

}