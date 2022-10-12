// Valdemar Kudžma
// Obliczyć funkcja y=ax^2
// Data 2022-10-11

#include <stdio.h>

int main(void) {
  
float a;
float x = 0;
float x_do = 0;
float x_od = 0;
float krokh = 0;
float y;  

  do {
  printf("Podaj stala a:\n"); // if (a != )
  scanf("%f", &a);
    }
    while (a == 0);
  
printf("\nPodaj od ilu zwiekszac x:\n");
  scanf("%f", &x_od);
  
   // do > od od spr
  do {
    printf("\nPodaj do ilu zwiekszac x:\n");
    scanf("%f", &x_do);
    }
    while (x_od > x_do);
  
  do{
  printf("\nPodaj krok zwiekszenia x:\n"); // nie ujemny spr
  scanf("%f", &krokh);
    }
    while (krokh <= 0);
  
  printf("\nZnaczenie stalej a: %0.2f", a);
  printf("\nX bedziemy zwiekszac od: %0.2f", x_od);
  printf("\nX bedziemy zwiekszac do: %0.2f\n", x_do);
  printf("Znaczenie kroku zwiekszenia x: %0.2f\n", krokh);
  
  if (x_do > x_od){
    x = x_od;
    while(x < x_do) {
      y = a * x * x;
      printf("\ny = %0.2f\nx = %0.2f\n", y, x);
      x += krokh;
    }
  }
  
  return 0;
}
