#include <stdio.h>
#include <math.h>

int main() {
  float P,T,R;
  printf("Enter Principal :");
  scanf("%f",&P);
  printf("Enter the Rate of interest :");
  scanf("%f",&R);
  printf("Enter Time :");
  scanf("%f",&T);
  // Compound interest = P*(pow( 1+R/100,T)-1)
  // Simple interest= (P*R*T)/100
  printf("Compound interest = %.2f",P*(pow(1+R/100,T)-1));
  printf("\nSimple Interest = %.2f",(P*T*R)/100);
    return 0;
}
