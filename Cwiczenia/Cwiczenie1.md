# Zadanie 1

Napisac program ktora pyta ilsosc dni w miesiacu i dzisieszy dzien. Wyprowadza ile zostalo dni do konca miesiaca.

```
//funkcja obiczajaca ile zostalo dni do konca miesiaca
zostDni(ilDni, dzisDzien) {
  return (ilDni - dzisDzien)
}

// zmienna wskazująca że zmienne nie są w pożądku
ok = false

// pytamy o ilosc dni w miesiacu i dzisiejszy dzien
while (ok == false) {
  ilDni, dzisDzien;

//sprawdzamy czy uzytkownik wprowadzil poprawne znaczenia, jezeli nie zmuszamy na wprowadzenie od nowa
  if ( (ilDni == 28 || ilDni == 30 || ilDni == 31) && (ilDni >= dzisDzien) && ilDni > 0 && ilDni < 31 && dzisDzien > 0 && dzisDzien < 31){
    ok = true
  }
}

//przekazujemy dla funkcji dane od uzytkownika i zachowujemy wynik w nowej zmiennej
zostDniDoKonca = zostDni(ilDni, dzisDzien);

```
