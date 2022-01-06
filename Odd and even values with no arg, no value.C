#include <stdio.h>
void even();
void odd();
int main()
{
    even();
    odd();
}
void even()
{int a,b;
printf("Enter the range of b:");
scanf("%d",&b);
{for(a=0;a<=b;a++)
{if(a%2==0)
printf("\n%d",a);
}
}
}

void odd()
{int a,b;
printf("\nEnter the range of b:");
scanf("%d",&b);
{for(a=0;a<=b;a++)
{if(a%2!=0)
printf("\n%d",a);
}
}
}
