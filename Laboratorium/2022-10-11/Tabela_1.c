// Valdemar Kudžma
// Obliczyć funkcja y=ax^2
// Data 2022-10-11

#include <stdio.h>
float x = 2;
float a = 1;
float y = 0;

int main(void) {
  
  while(x<7){
    y = a*x*x;
    printf("%f\n", y);
    x += 2;
    a += 0.5;
  }
  return 0;
}
