#include <stdio.h>
int main()
{
  int a,b,sum=0,temp;
  printf("Enter the value of a=");
  scanf("%d",&a);
  temp=a;
  while(a>0)
  {b=a%10;
    sum=(sum*10)+b;
   a=a/10;
  }
  if(temp==sum)
    printf("The given number is a palindrome number");
  else
    printf("The given number is not a palindrome number");
  return 0;
}
   
