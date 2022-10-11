// Valdemar Kudžma
// Obliczyć funkcja y=ax^2
// Data 2022-10-11

#include <stdio.h>

float a = 0;
float x = 0;
float x_do = 0;
float krokh = 0;
int n=0;
float y;


int main(void) {
  
  printf("Podaj stala a:\n");
  scanf("%f", &a);
  printf("%f\n", a);
  
  printf("Podaj do ilu zwiekszac x:\n");
  scanf("%f", &x_do);
  printf("X bedziemy zwiekszac do: %f\n", x_do);

  printf("Podaj krok zwiekszenia x:\n");
  scanf("%f", &krokh);
  printf("Znaczenie kroku zwiekszenia x: %f\n", krokh);

  while(x < x_do) {
    y = a * x * x;
    printf("\nZnaczenie y = %f\na = %f\nx = %f\n", y, a, x);
    x += krokh;
  }
  return 0;
}
