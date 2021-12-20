#include <stdio.h>
int main()
{ 
  int a,b,i;
  b=1;
  printf("Enter the number you want a factorial of:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    b=b*i;
    }
  printf("The factorial of the given number is: %d",b);
  return 0;
}
