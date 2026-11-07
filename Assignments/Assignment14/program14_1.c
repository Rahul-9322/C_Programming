#include<stdio.h>

int MultFact(int iNo)
{
    int icnt = 0;
    int fact = 1;
    for(icnt = 1; icnt < iNo; icnt++)
    {
        if((iNo % icnt) == 0)
        {
          fact = fact * icnt;
        }
    }
    return fact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}