# Zadanie 1

Napisac program ktora pyta ilsosc dni w miesiacu i dzisieszy dzien. Wyprowadza ile zostalo dni do konca miesiaca.

```
zostDni(ilDni, dzisDzien) { // funkcja obiczajaca ile zostalo dni do konca miesiaca
  return (ilDni - dzisDzien)
}

podaj ilDni, dzisDzien; // pytamy o ilosc dni w miesiacu i dzisiejszy dzien

// sprawdzamy czy uzytkownik wprowadzil poprawne znaczenie
if (ilDni > 27 && ilDni < 32) && ilDni > 0 && ilDni < 32 && dzisDzien > 0 && dzisDzien < 31) {
  zostDniDoKonca = zostDni(ilDni, dzisDzien);
}


print zostDniDoKonca; // drukujemy ilosc dni do konca miesiaca

```
