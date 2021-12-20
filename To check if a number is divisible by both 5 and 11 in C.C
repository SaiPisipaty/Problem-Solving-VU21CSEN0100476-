// Program to find if a number is divisible by both 5 and 11
#include <stdio.h>
int main()
{
int A;
printf("Enter the value of A:");
scanf("%d",&A);
if((A%5==0)&&(A%11==0)) //condition
{printf("%d is divisible by both 5 and 11",A);
}
else
{printf("%d is not divisible by both 5 and 11",A);
}
return 0;
}
