#include <stdio.h>
int main(){
    float a,b,c,d,e,f,g,h,i;
    printf("Total marks in all subjects=");
    scanf("%f",&h);
    printf("Enter the marks of first subject:");
    scanf("%f",&a);
    printf("Enter the marks of the second subject:");
    scanf("%f",&b);
    printf("Enter the marks of the third subject:");
    scanf("%f",&c);
    printf("Enter the marks of fourth subject:");
    scanf("%f",&d);
    printf("Enter marks of the fifth Subject:");
    scanf("%f",&e);
    g=(a+b+c+d+e);
    f=(a+b+c+d+e)/5;
    i=((a+b+c+d+e)/h)*100;
    printf("percentage of marks = %f",i);
    printf("\nThe total Marks= %.2f \n",g);
    printf("The average of marks in 5 subjects is= %f",f);
   return 0; 
}   
