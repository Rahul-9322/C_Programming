#include<stdio.h>

int Count(int iNo)
{
    int count = 0;
    while(iNo != 0)
    {
        int ven = 0;
        ven = iNo % 10;
        if(ven < 6)
        {
            count++;
        }
        iNo = iNo / 10;
    } 
   return count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}