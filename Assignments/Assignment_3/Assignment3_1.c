#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        return;
    }
    for( i=1; i<= iNo;i++)
    {
       printf("%d ",2*i);
    }
}
int main()
{

    int iValue =0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return EXIT_SUCCESS;
}