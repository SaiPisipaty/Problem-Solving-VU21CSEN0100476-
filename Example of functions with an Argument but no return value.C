#include <stdio.h>
int sum(int i, int j,int k)
{printf("%d",i+j+k);
}
int main()
{int a,b,c;
printf("Enter the value of the three numbers:");
scanf("%d %d %d",&a,&b,&c);
sum(a,b,c);

}
