    //Check Admission Eligibility
    #include<stdio.h>
    #include<stdlib.h>
    void CheckAddmission(float fMarks, int iAge)
    {
        if(fMarks < 0 || fMarks > 100 || iAge <0)
        {
            printf("Invalid Input\n");
            return;
        }
        else if((fMarks >= 60) && (iAge >= 17))
        {
            printf("Eligible for Addmission");
        }
        else 
        {
            printf("Not Eligible");
        }       
    
    }
    int main()
    {
        float fMarks = 0.0f;
        int iAge = 0;
        printf("Enter Marks and Age :");
        scanf("%f %d",&fMarks, &iAge);
        CheckAddmission(fMarks,iAge);
        return EXIT_SUCCESS;
    }