#include<stdio.h>

int CountRange(int iNo)
{
    int icnt = 0;
    int no = 0;
    while(iNo != 0)
    {
        no = iNo % 10;
        if(no > 3 && no < 7)
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}
