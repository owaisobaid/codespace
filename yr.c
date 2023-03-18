#include<stdio.h>
int main()
{
    int yr;
    printf("enter year=");
    scanf("%d",&yr);
    if(yr/4==0)
    {
        printf("year entered is not leap year" );
    }
    else
    printf("year not leap year");
}