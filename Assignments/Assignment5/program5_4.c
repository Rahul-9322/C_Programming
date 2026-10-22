// Check Divisibility by 3 and 5
#include<stdio.h>
#include<stdlib.h>
void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3)==0)
    {
        if((iValue % 5)==0)
        {
            printf("It is Divisible by 3 & 5");
        }
        else
        {
             printf("It is not Divisible");
        }
    }
    
    
    
}
int main()
{
    int iValue = 0;
    printf("Enter Numbers :");
    scanf("%d",&iValue);
    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}