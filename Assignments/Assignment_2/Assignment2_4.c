#include<stdio.h>
#include<stdlib.h>
void Display(int iNo,int iFrequency)
{
    
      int no=0;
    for(no=1 ;no<=iFrequency; no++)
    {
        printf("%d",iNo);
    }
    
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return EXIT_SUCCESS;
}