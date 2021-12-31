#include <stdio.h>
int main()
{
	int a;
	printf("Enter the number that you want to check for: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a Positive number",a);
	}
	else if(a<0)
	{
		printf("%d is a Negative number",a);
	}
	else
	{
		printf("The given number is 0");
	}
	
	return 0;
}
