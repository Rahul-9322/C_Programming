// Check whether a number is Positive or Negative
#include<stdio.h>
#include<stdlib.h>
void CheckNumber(int iValue)
{
    if(iValue >= 1)
    {
        printf("positive number : %d\n",iValue);
    }
    else if(iValue < 0)
    {
        printf("negative number : %d\n",iValue); 
    }
    else
    {
        printf("Zero : %d\n",iValue);
    }
} 
int main()
{
    int iValue = 0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    CheckNumber(iValue);
    return EXIT_SUCCESS;
}