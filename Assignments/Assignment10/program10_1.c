#include<stdio.h>

double CircleArea(float fRadius)
{
    float Area;
    Area = 3.14 * fRadius * fRadius;
    return Area;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("the area is : %lf",dRet);

    return 0;
}