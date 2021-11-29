#include <stdio.h>
#include<string.h>
int main()
{ 
  char a;
int b;
printf("Enter the upper case character here:");
scanf("%c" ,&a);
b=a+32;
printf("\n %c The upper case character in lower case is %c" ,a,b);
return 0;
}

