#include <stdio.h>
#include <math.h>
int main()
{

int a,b,c,d;
float R1,R2;
printf("Enter the value of coefficient of x square:");
scanf("%d",&a);
printf("Enter the value of coefficient of x:");
scanf("%d",&b);
printf("Enter the constant value:");
scanf("%d",&c);
d=pow(b,2)-4*a*c;
R1=(-b+sqrt(d))/(2*a);
R2=(-b-sqrt(d))/(2*a);
printf("The roots of the quadratic equation are %.2f,%.2f",R1,R2);
return 0;
}
