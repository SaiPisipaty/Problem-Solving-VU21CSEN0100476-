#include <stdio.h>
int main()
{
 int a,b,c,d,e,g,ch;
 float f;
 printf("Enter the values of a and b");
 scanf("%d %d",&a,&b);
 printf("Enter Operation \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Average");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
        c=a+b;
        printf("The addition of two numbers is %d",c);
        break;
        
  case 2:
  d=a-b;
  printf("The difference of two numbers is %d",d);
  break;
  
  case 3:
  e=a*b;
  printf("The product of two numbers is %d",e);
  break;
  
  case 4:
  f=a/b;
  printf("The division of two numbers is %0.2f",f);
  break;
  
  case 5:
  g=a+b/2;
  printf("The average of two numbers is %d",g);
  break;
  
  return 0;
  }
  }
