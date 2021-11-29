#include <stdio.h>
int main(){
    float basic,hra,da,pf,lic,total;
    printf("Enter all values here =");
    scanf("%f %f %f %f %f" , &basic ,&hra ,&da ,&pf ,&lic);
    total=basic+hra+da+pf+lic;
    printf("The Total salary is= %.2f", total);
  return 0;
}
