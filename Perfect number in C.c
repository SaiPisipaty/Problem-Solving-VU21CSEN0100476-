#include <stdio.h>
int main()
{
    int a,b,sum=0,i;
    printf("Enter the number you want to check: ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        b=a%i;
        if(b==0)
        sum=sum+i;
    }
    if(sum==a)
    printf("The  number is a perfect number");
    else
    printf("The number is not a perfect number");
}
