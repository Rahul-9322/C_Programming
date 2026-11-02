#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3 )
{
    float favg = 0.0f;
    favg = ((float)iNo1 + (float)iNo2 + (float)iNo3)/3; //typecasting
    return favg;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3= 0;
    float favg = 0.0f;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);

    printf("Enter the Third number : \n");
    scanf("%d",&iValue3);
    

     favg = Average(iValue1,iValue2,iValue3);
     
     printf("Average is :%f\n",+favg);
    return EXIT_SUCCESS;
}
