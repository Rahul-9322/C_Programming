#include<stdio.h>

int MultiDigits(int iNo)
{
    int no = 0;
    int ret = 1;
    while(iNo != 0)
    {
    
       no = iNo % 10;
       ret = no * ret;
       iNo = iNo / 10;
    }
    return ret;
   
}
 


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}