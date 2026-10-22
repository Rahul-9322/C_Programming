// Check Voting Eligibility
#include<stdio.h>
#include<stdlib.h>
void CheckVotingEligibility(int iAge)
{
   if(iAge < 0)
    {
        printf("Invalid Age :%d",iAge);
    }
   else if(iAge >= 18)   
    {
        printf("Eligible for voting :%d",iAge);
    }
    else 
    {
        printf("Not Eligible for voting :%d",iAge);
    }
    
   
}
int main()
{
    int iAge = 0;
    printf("Enter the age :\n ");
    scanf("%d",&iAge);
    CheckVotingEligibility(iAge);
    return EXIT_SUCCESS;
}