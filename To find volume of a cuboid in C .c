#include <stdio.h>
#include <math.h>
int main()
{
            
 float l,b,h,v;
 printf("Enter the length of the cuboid: ");
 scanf("%f", &l);

 printf("Enter the breadth of cuboid: ");
 scanf("%f", &b);

 printf("Enter the height of the cuboid: ");
 scanf("%f", &h);
 v = (l*b*h);
 printf("Volume of cuboid = %0.2f", v);

    return 0;
}
