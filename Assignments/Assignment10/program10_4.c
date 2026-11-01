#include<stdio.h>

double FhtoCs(float fTemp)
{
    double celcius;
    celcius = (fTemp - 32)*(5/9);
    return celcius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("celcius is :%lf",dRet);
    return 0;
}