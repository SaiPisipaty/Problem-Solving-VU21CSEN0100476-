#include <stdio.h>

int main()
{
    
    int a,b,c;
    printf("The value of first angle is :");
    scanf("%d",&a);
    printf(" The value of second angle is :");
    scanf("%d",&b);
    c=180-(a+b);
    printf("The value of the third angle is= %d",c);
    return 0;
}
