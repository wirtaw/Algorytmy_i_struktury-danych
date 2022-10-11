// Valdemar Kudžma
// Laboratorium 1.
// Poszukiwanie minimalnej albo maksymalnej
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
  int sizex = 0;
  int sizey = 0;
  
    for(int i = 0; i < n; i++) {
      sumax += x[i];
      sumay += y[i];
      mnozx *= x[i];
      mnozy *= y[i];
     }
  
  sizex = sizeof(x)/sizeof(float);
  sizey = sizeof(y)/sizeof(float);

  printf("\nSuma tablicy X(n): %0.2f\n", sumax);
  printf("Suma tablicy Y(n): %0.2f\n", sumay);
  printf("Ilość elementów tablicy: %d\n", sizex);
  printf("Mnożenie elementów tablicy X(n): %0.2f\n", mnozx);
  printf("Mnożenie elementów tablicy Y(n): %0.2f\n", mnozy);
  
  float sredniax = sumax/sizex;
  float sredniay = sumay/sizey;
  
  printf("\nSrednia X(n): %0.2f\n", sredniax);
  printf("Srednia Y(n): %0.2f\n", sredniay);

  float maksx = 0;
  float maksy = 0;
   
  for (int i = 0; i < n; i++){
    if (maksx < x[i]){
      maksx = x[i];
    }
    if (maksy < y[i]){
      maksy = y[i];
    }
  }

  printf("\nMaksymalne znaczenie X(n): %0.2f\n", maksx);
  printf("Maksymalne znaczenie Y(n): %0.2f\n", maksy);
  
  return 0;
}
