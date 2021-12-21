#include<stdio.h>
int main()
{
int a=0,b=1,number,c,i;
printf("Enter the number of elements you need in the series:");
scanf("%d",&number);
printf("\n%d",a,b);
for(i=2;i<number; i++) //the loop starts at 2 because 0 and 1 are already assigned to a and b
{c=a+b;
printf("\n%d",c);
a=b;  //These functions allow the loop to continue by switching the values out with a and b
b=c;
}
return 0;
}
