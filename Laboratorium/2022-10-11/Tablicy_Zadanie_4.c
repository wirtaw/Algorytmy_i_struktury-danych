// Valdemar Kudžma
// Laboratorium 1.
// Obliczyć funkcja y = ax^2, gdy a - stałe, x jest wybierany z tablicy X(n), wyniki funkcji zapisywać Y(n)
// Data 2022-10-11

#include <stdio.h>

int main(){
  
float a;
int n;
  
  do {
    printf("Podaj stala a:\n");
    scanf("%f", &a);
  } while (a == 0);

  do {
    printf("\nPodaj rozmiar tablicy X(n):\n");
    scanf("%d", &n);
  } while (n < 0);

  float x[n];
  float y[n];

  printf("\n");
  
  for(int i =0; i < n; i++){
    printf("wprowadz liczba X(%d) = ", i);
    scanf("%f", &x[i]);
  }

  printf("\n\n");

  printf("Wartość stałej a: %0.2f", a);
  
  printf("\n");

  for(int i = 0; i < n; i++){
    printf("Wartosc w tablicy X(%d): %0.2f\n", i, x[i]);
  }

  printf("\n");

  for(int i = 0; i < n; i++){
    y[i] = a * x[i] * x[i];
    printf("y = %0.2f\n", y[i]);
  }
  
  return 0;
}
