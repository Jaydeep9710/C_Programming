#include <stdio.h>
#include <stdlib.h>

void DisplayGrade (float fMarks)

{
    if(fMarks >= 90.0f && fMarks <= 100.0f)
    {
        printf("A");
    }
    else if(fMarks >= 75.0f && fMarks <= 89.0f)
    {
        printf("B");
    }
    else if(fMarks >= 60.0f && fMarks <= 74.0f)
    {
        printf("C");   
    }
    else if(fMarks >= 40.0f && fMarks <= 59.0f)
    {
        printf("D");
    }
    else if(fMarks >= 0.0f && fMarks < 40.0f)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Marks");
    }



}

int main()

{

        float fMarks =0.0f;

        printf("Enter marks: ");
        scanf("%f", &fMarks);

        DisplayGrade (fMarks);

        return EXIT_SUCCESS;
}