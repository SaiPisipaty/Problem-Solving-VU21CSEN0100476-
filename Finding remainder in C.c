#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numerator: ");
    scanf("%d", &a);

    printf("Enter the denominator: ");
    scanf("%d", &b);

    int q = a / b;
    int r = a - (q * b);

    printf("The remainder is: %d", r);

    return 0;
}
