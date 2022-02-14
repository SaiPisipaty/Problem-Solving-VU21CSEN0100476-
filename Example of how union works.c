#include <stdio.h>
#include<string.h>

union student
{
    char name[20];
    char subject[20];
    float percentage;
};
int main()
{
union student record1;
union student record2;
strcpy(record1.name,"Yasaswi");
printf("Name:    %s   ",record1.name);
strcpy(record1.subject,"English");
printf("\nSubject: %s     ",record1.subject);
record1.percentage=95;
printf("\nPercentage:%0.3f ",record1.percentage);

strcpy(record2.name,"Uday");
printf("\n\nName:%s",record2.name);
strcpy(record2.subject,"Maths");
printf("\nSubject:%s",record2.subject);
record2.percentage=100.00;
printf("\nPercentage:%0.2f",record2.percentage);
}
