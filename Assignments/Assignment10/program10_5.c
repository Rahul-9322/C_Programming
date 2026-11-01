#include<stdio.h>

double SquareMeter(int iValue)
{
    float meter;
    meter = iValue * 0.0929;
    return meter;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("the Square meter is :%lf\n",dRet);

    return 0;
}