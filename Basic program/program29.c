#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2)
{
    float favg = 0.0f;
    favg = ((float)iNo1 + (float)iNo2)/2; //typecasting
    return favg;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;
    float favg = 0.0f;
    printf("Enter the first number : \n");
    scanf("%d",&iValue1);
     printf("Enter the second number : \n");
    scanf("%d",&iValue2);
     fResult = Average(iValue1,iValue2);
     
     printf("Average is :%f\n",+fResult);
    return EXIT_SUCCESS;
}
