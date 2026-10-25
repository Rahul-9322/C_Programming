
/*
Name: Rahul
Program: Check Perfect Number
*/

// Step 1: Start.

// Include header files
#include<stdio.h>
#include<stdlib.h>

// Step 2: Define the function
void CheckPerfect(int iNo)
{
    // Step 3: Initialize variables
    int icnt = 0;
    int isum = 0;

    // Step 4: Display the factors heading
    printf("Factors of %d are:\n", iNo);

    // Step 5: Repeat loop from 1 to iNo/2
    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        // Step 6: Check whether icnt is a factor
        if((iNo % icnt) == 0)
        {
            // Step 7: Add factor to the sum
            isum = isum + icnt;

            // Display each factor
            printf("%d\n", icnt);
        }
    }

    // Step 8: Check whether sum equals original number
    if(isum == iNo)
    {
        // Step 9: Display perfect number
        printf("It is a perfect number.\n");
    }
    else
    {
        // Step 10: Display not a perfect number
        printf("It is not a perfect number.\n");
    }
}

// Step 11: Main function starts
int main()
{
    // Step 12: Declare variable
    int iValue = 0;

    // Step 13: Accept number from user
    printf("Enter number:\n");
    scanf("%d", &iValue);

    // Step 14: Call the function
    CheckPerfect(iValue);

    // Step 15: Stop the program
    return EXIT_SUCCESS;
}

// Time Complexity: O(N)