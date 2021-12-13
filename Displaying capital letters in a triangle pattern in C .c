#include <stdio.h>
int main()
{ int i,j;

	for(i=0;i<9;i++)
// Opening brackets to create a loop in a loop a.k.a nested loop
{
	for(j=0;j<=i;j++)
//The condition for the nested loop is entered by opening another set of flower brackets
{    
	printf("%c",i+65);
}
//Function of original loop
printf("\n");
}
return 0;
}
