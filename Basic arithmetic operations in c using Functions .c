#include <stdio.h>
void add();
void sub();
void mul();
void div();
void avg();
void main()
{   add();
    sub();
    mul();
    div();
    avg();
}
 
void add()
{ int a,b;
printf("Enter the value of a and b");
scanf("%d %d",&a,&b);
printf("The sum of the given two numbers is %d",a+b);
}


void sub()
{int a,b;
printf("\nEnter a and b:");
scanf("%d %d",&a,&b);
printf("\nThe difference of the two numbers is %d",a-b);
}

void mul()
{int a,b;
printf("\nEnter a and b:");
scanf("%d %d",&a,&b);
printf("\nThe multiplication of two numbers is %d",a*b);
}

void div()
{ int a,b;
printf("\nenter a and b:");
scanf("%d %d",&a,&b);
printf("\nThe division of two numbers is %d",a/b);
}

void avg()
{
int a,b,c,d;
printf("\nenter the value for a,b,cand d:");
scanf("%d %d %d %d",&a,&b,&c,&d);
printf("\nThe average of 4 numbers is %d",(a+b+c+d)/4);
}
