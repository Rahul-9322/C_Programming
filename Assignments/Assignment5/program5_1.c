// Find the Greatest of Three Numbers
#include<stdio.h>
#include<stdlib.h>
void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("Greatest is :%d\n",iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird)) 
    {
        printf("Greatest is :%d\n",iSecond);
    }
    else 
    {
        printf("Greatest is :%d\n",iThird);
    }


}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enter three numbers :");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);
    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
} 