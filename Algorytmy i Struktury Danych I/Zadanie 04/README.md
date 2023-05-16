# Algorytmy i Struktury Danych

## Zadanie 4 - Faktury

### Treść Zadania

Biuro administracji Sołtysa nie było przyzwyczajone do pracy z dużą liczbą faktur. A zamówienia do budowy infrastruktury na Wyspie wciąż napływały. Dodatkowo Sołtys zatrudnił ostatnio bratanka z sąsiedniej wioski, a ten niezbyt dobrze radził sobie z drukarką. Wiele faktur wydrukował po kilka lub kilkanaście razy. Teraz całe biuro jest nimi wypełnione. Sołtys zwrócił się o pomoc do Ady i Serweryna. Poprosił ich o jakieś narzędzie do uporządkowania wszystkich faktur alfabetycznie. Ada i Serweryn wpadli na pomysł, by użyć do tego binarnej struktury drzewiastej. Wymyślili też, że nie trzeba wprowadzać kilka razy tej samej faktury omyłkowo drukowanej przez bratanka Sołtysa. Wystarczy zapamiętać w takim drzewie liczbę wystąpień każdej z faktur.

### Wejście:

Na standardowym wejściu w pierwszej linii pojawia się liczba wydrukowanych faktur do wprowadzenia ***n***, a następnie ***n*** linii zawierających nazwy faktur. Nazwy mogą składać się z cyfr i wielkich liter.

***0 ≤ n ≤ 3000000***

### Wyjście:

Należy wypisać w kolejnych liniach listę ***n*** wprowadzonych faktur posortowaną rosnąco.

### Przykład:

Wejście:

```
10
AAAAAAA1234
BC21374A12
POAB0986541
XZASQ4689
POAB0986541
SWE1243D23
POAB0986541
DER098765532
VV111111111
VV111111111
```

Wyjście:

```
AAAAAAA1234
BC21374A12
DER098765532
POAB0986541
POAB0986541
POAB0986541
SWE1243D23
VV111111111
VV111111111
XZASQ4689
```

***Uwaga! Zadanie ma być samodzielną implementacją drzewa binarnego bez wkorzystania bibliotek STL.***
