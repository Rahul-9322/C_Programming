// Calculate Student Grade
#include<stdio.h>
#include<stdlib.h>
void DisplayGrade(float fMarks)
{
    if(fMarks > 100)
    {
        printf("Invalid Marks");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A");
    }
    else if(fMarks >= 75)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60)
    {
        printf("Grade C");
    }
    else if(fMarks <= 40)
    {
        printf("Fail");
    }
    
   
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter the marks :\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);
    return EXIT_SUCCESS;
}