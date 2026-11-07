#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float Percentage = 0.0f;
    Percentage = (float)iNo2 / iNo1 * 100;
    return Percentage;
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%f\n",fRet);

    return 0;
}