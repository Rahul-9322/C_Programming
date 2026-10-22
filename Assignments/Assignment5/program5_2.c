//Check Leap Year
#include<stdio.h>
#include<stdlib.h>
void CheckLeapYear(int iYear)
{
    if(iYear % 100) 
    {
        printf("Not a Leap Year");
    } 
    else if((iYear % 400) || (iYear % 4)) 
    {
        printf("Leap Year");
    }
   
}
int main()
{
    int iYear = 0;
    printf("Enter Year :\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}
