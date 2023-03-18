#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,sum,percentage,cgpa;
int x;
printf("s1=");
scanf("%f",&s1);
printf("s2=");
scanf("%f",&s2);
printf("s3=");
scanf("%f",&s3);
printf("s4=");
scanf("%f",&s4);
printf("s5=");
scanf("%f",&s5);
sum=s1+s2+s3+s4+s5;
printf("enter max marks=");
scanf("%d",&x);
percentage=(sum/x)*100;
printf("percentage=%.3f\n",percentage);
cgpa=(percentage/9.5);
printf("cgpa=%.3f\n",cgpa);
return 0;
}