#include<stdio.h>

int CountTwo(int iNo)
{
     int no = 0;
     while(iNo != 0)
    {
        
        int iDigit = 0;
       iDigit = iNo % 10;
        if(iDigit == 2)
        {
          no++;
        }
        iNo = iNo / 10;
    }
    return no;
    
}
int main()
{

    int iValue = 0;
    int bRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);

    printf("%d",bRet);

    return 0;
}