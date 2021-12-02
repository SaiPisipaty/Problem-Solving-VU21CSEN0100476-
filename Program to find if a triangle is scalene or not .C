#include <stdio.h>
int main()
{
int A,B,C;
printf("Enter side A");
scanf("%d",&A);
printf("Enter side B");
scanf("%d",&B);
printf("Enter side C");
scanf("%d",&C);
if(A!=B &&B!=C &&C!=A)
{
printf("The triangle is scalene");
}
else
{
printf("The triangle is not scalene");
}

return 0;
}
