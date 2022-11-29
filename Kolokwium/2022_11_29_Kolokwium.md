
Pytanie 'Jaki kroki nieprzepisowe jest w metoda indukcji pętli przy udowodnieniu poprawności algorytmu?': 
Odpowiedzi: 
        a) użyć indukcji, aby pokazać resztę 


Pytanie 'Jaki warunek odpowiada niezmienniku pętli?': 
Odpowiedzi: 
        c) jeśli predykat jest spełniony przed wejściem w pewną (dowolną) iterację pętli to jest także spełniony po wyjściu z tej iteracji pętli 


Pytanie 'Jaka z notacji asymptotycznych jest ze złożonością pod-wykładniczna?': 
Odpowiedzi: 
        b) 
W(n)=2+lg2n=Θ(log(n))
f) 
A(n)=Θ(nlog(n))
g) 
A(n)=Θ(2n)


Pytanie 'Jakie z podanych operacji mozliwe w kolejkie.': 
Odpowiedzi: 
        a) push (dodanie elementa) 
c) pop (wyjmowanie elementa) 


Pytanie 'Jaka złożoność czasowa z podanych niżej jest dla poszukiwania najmniejszej liczby w tablice niesortowanej': 
Odpowiedzi: 
        c) 
O(n)


Pytanie 'Mamy funkcja
T(n)=2(n−1)24−n22
. Jaka jest złożoność asymptotyczna ?': 
Odpowiedz: 
        c) 
Θ(n2)


Pytanie 'Czy wskazany algorytm jest całkowicie poprawny?': 
Pseudokod: 
```c
find(array, len, key) {
    i = 0
    
    while (i < len && array[i] != key) {
      i = i + 1;
    }
    
    if (i + 1 >= len) {
      return -1;
    } else {
      return i;    
    }
}
```
Odpowiedz: 
        a) Tak 


