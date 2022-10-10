# Zadanie 4



```
x = 99; liczbyArmstr[]; j = 0;

while (x < 10000) {
  if (x < 1000){
      // rozdzielamy liczbe w zmiennej x po jednej cyferce:
        x1, x2, x3
      // sprawdzamy czy liczba jest liczba Armstronga
        if (x == x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3){
            liczbyArmstr[j] = x;
            j++;
        }    
  } 
  if (x > 999 && < 10000) {
    // rozdzielamy liczbe w zmiennej x po jednej cyferce:
          x1, x2, x3, x4
    // sprawdzamy czy liczba jest liczba Armstronga
          if (x == x1 * x1 * x1 * x1 + x2 * x2 * x2 * x2 + x3 * x3 * x3 * x3 + x4 * x4 * x4 * x4){
              liczbyArmstr[j] = x;
              j++;
          }
  x++;
}

```
