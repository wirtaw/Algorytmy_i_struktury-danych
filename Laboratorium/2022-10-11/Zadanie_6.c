// Valdemar Kudžma
// Laboratorium 1.
// Obliczenie sredniej
// Data 2022-10-11

#include <stdio.h>

float a;
float y;
int n;

int main(){
  
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
  
  float sumax = 0;
  float sumay = 0;
  int ilosc = 0;
  float mnozx = 1;
  float mnozy = 1;
  
    for(int i = 0; i < n; i++) {
      sumax += x[i];
      sumay += y[i];
      ilosc++;
      mnozx *= x[i];
      mnozy *= y[i];
     }

  printf("\nSuma tablicy X(n): %0.2f\n", sumax);
  printf("Suma tablicy Y(n): %0.2f\n", sumay);
  printf("Ilość elementów tablicy: %d\n", ilosc);
  printf("Mnożenie elementów tablicy X(n): %0.2f\n", mnozx);
  printf("Mnożenie elementów tablicy Y(n): %0.2f\n", mnozy);
  
  float sredniax = sumax/ilosc;
  float sredniay - sumay/ilosc;
  
  printf("Srednia X(n): %0.2f", sredniax);
  printf("Srednia Y(n): %0.2f", sredniay);
  
  return 0;
}

