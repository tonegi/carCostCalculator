#include <stdio.h>

int main(void) {
  double factoryCost, finalCost, tax, distributor;
  printf("Enter the factory cost of the car: USD$ ");
    scanf("%lf",&factoryCost);
  
  tax = factoryCost * 0.45;
  distributor = factoryCost * 0.28;
  finalCost = factoryCost + tax + distributor;
  
    printf("The tax cost is: USD$ %.2f\n",tax);
    printf("The amount allocated to the distributor is: USD$ %.2f\n",distributor);  
    printf("The final cost of the car is: USD$ %.2f\n",finalCost);
    
  return 0;
}
