#include<stdio.h>

int CountDiff(int iNo)
{
    int icnt = 0;
    int cls = 0;
    int no = 0;
   
    while(iNo != 0)
    {
        no = iNo % 10;
        if((no % 2) == 0)
        {
          icnt = icnt + no;
        }
        else 
        {
          cls = cls + no;
        }
        iNo = iNo / 10;
        
    }
    int Ans = 0;
    Ans =icnt - cls;
    return Ans;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}