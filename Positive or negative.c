#include <stdio.h>

int main(void) {
   double number;

  printf("enter a number:");
  scanf("%lf", &number);
 if (number > 0){
     printf("%lf is positive ", number);
 }
 else if (number < 0){
   printf("%lf is negative ", number);
 }
 else
  printf("%lf is zero", number);
  return 0;
}
