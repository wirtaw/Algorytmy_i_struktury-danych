# Zadanie 4
Liczba naturalna z n cyfr jest liczbą Armstronga, jeżeli suma jego liczb w pierwiastku n, jest równa samej liczbie.
Naprzykład: 153 = 1^3 + 5^3 + 3^3.
Napisać program otrzymania wszytkich liczb Armstronga z liczb 3 i 4 cyfrowych.
```
x = 99; liczbyArmstr[]; j = 0;

while (x < 10000) {
  if (x < 1000){
      
        x1, x2, x3 // rozdzielamy liczbe w zmiennej x po jednej cyferce
        
      
        if (x == x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3) { // sprawdzamy czy liczba jest liczba Armstronga
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
