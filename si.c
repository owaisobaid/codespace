#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("principal amount=");
    scanf("%f",&p);
    printf("rate of interest=");
    scanf("%f",&r);
    printf("time period=");
    scanf("%f",&t);
    si=p*(r/100)*t;
    printf("simple interest=%f",si);

}