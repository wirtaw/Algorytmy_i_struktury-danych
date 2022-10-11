// Valdemar Kudžma
// Obliczyć funkcja y=ax^2
// Data 2022-10-11

#include <stdio.h>

float a;
float x = 0;
float x_do = 0;
float x_od = 0;
float krokh = 0;
int n=0;
float y;


int main(void) {
  
  printf("Podaj stala a:\n");
  scanf("%f", &a);

printf("\nPodaj od ilu zwiekszac x:\n");
  scanf("%f", &x_od);
  
  printf("\nPodaj do ilu zwiekszac x:\n");
  scanf("%f", &x_do);
  
  printf("\nPodaj krok zwiekszenia x:\n");
  scanf("%f", &krokh);

  printf("\nZnaczenie stalej a: %f", a);
  printf("\nX bedziemy zwiekszac od: %f", x_od);
  printf("\nX bedziemy zwiekszac do: %f\n", x_do);
  printf("Znaczenie kroku zwiekszenia x: %f\n", krokh);
  
  if (x_do > x_od){
    x = x_od;
    while(x < x_do) {
      y = a * x * x;
      printf("\ny = %f\nx = %f\n", y, x);
      x += krokh;
    }
  } 
  
  return 0;
}
