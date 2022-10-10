# Zadanie 2
Nieskończone, w trakcie wykonania!!!


Napisac program ktory oblicza jakiego roku urodzenia i jaki teraz jest rok. Wyprowadza ile lat uzytkowniku.

```
\\tworzymy funkcje ktora bedzie obliczac ilosc lat

lat_Uzytkowniku(terazRok, rokUrodzenia) {
  illat_Uzytkowniku = terazRok - rokUrodzenia
  return illat_Uzytkowniku
}


\\ zmienne przechowujace rok urodzenia,terazniejszy rok oraz ilosc lat uzytkownika

rokUrodzenia, terazRok = /* wczytujemy dzisiejsza date */, lat_Uzytkowniku;

\\ pytamy o rokUrodzenia
podaj rokUrodzenia;

\\pytamy czy urodzil sie przed czy po terazniejszym miesiacu i dniu
podaj jezeliPo = true/false;

\\wywolujemy funkcje i zachowujemy rezultat z return do zmiennej
illat_Uzytkowniku = lat_uzytkowniku(terazRok, rokUrodzenia)

if (jezeliPo == false) {
	illat_Uzytkowniku = illat_Uzytkowniku - 1;
}

drukujemy:
	illat_Uzytkowniku;

```
