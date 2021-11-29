#include <stdio.h>

int main() {
    int h,m,s;
    printf("Enter time in hours: ");
    scanf("%d", &h);

    
    m=h*60;
    s=h*3600;
    
    printf("\ntime in minutes is: %d",m);
    printf("\ntime in seconds is: %d",s);

    return 0;
}
