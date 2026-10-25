#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
    int icnt = 0;
    int iSum = 0;
    for(icnt = 1; icnt <= iNo/10; icnt++)
    {
        if((iNo % icnt)==0)
        {
            iSum = iSum + icnt;
        }
    }
    if(iSum == 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet)
    {
        printf("It is prime number");
    }
    else
    {
       printf("It is not prime number");
    }
    return EXIT_SUCCESS;
}