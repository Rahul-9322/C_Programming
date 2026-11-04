#include<stdio.h>

int CountFour(int iNo)
{
    int count = 0;
    while(iNo != 0)
    {
        int ven = 0;
         ven = iNo % 10;
        if(ven == 4)
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

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}