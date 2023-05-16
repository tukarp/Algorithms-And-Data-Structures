# Algorytmy i Struktury Danych

## Zadanie 9 - Rankingowe polowanie

### Treść zadania

Po każdym udanym polowaniu konieczny jest podział łupów oraz liczne przechwałki. Pierwsza z tych rzeczy uregulowana jest na Wyspie w bardzo prosty sposób: każdy zachowuje to co złapał. W przypadku drugiej, zasady są jeszcze prostsze: nie ma zasad. Ta lekkoduszność w połączeniu z wrzącą w żyłach krwią Dotnetu sprawiają, że zakończone polowanie zamienia się sportową galę... często bardzo brutalną. Tym razem Wielki Łowczy nie chciał na to pozwolić. Aby powstrzymać myśliwych od walki o status najlepszego, poprosił Adę i Serweryna o uszeregowanie wszystkich uczestników polowania według ich zdobyczy.

### Wejście

W pierwszej linii wejścia podana jest liczba ***n*** myśliwych, biorących udział w polowaniu. Kolejne ***n*** linii to opisy łowców, składające się z: imienia złożonego z, co najwyżej dwudziestu, małych i wielkich liter alfabetu łacińskiego; zadeklarowanej liczby upolowanych krabów ***k_i*** oraz liczby otrzymanych przez myśliwego pułapek ***p_i***.

***1 ≤ n ≤ 100000***

***0 ≤ k_i ≤ 99***

***1 ≤ pi ≤ 9***

### Wyjście

Na wyjściu należy wypisać posortowaną malejąco względem liczby złapanych krabów listę imion myśliwych. W przypadku takiej samej liczby złapanych krabów, pierwszy jest ten, który użył mniejszej liczby pułapek. Jeśli dwie osoby złapały taką samą liczbę krabów przy pomocy tej samej liczby pułapek, należy zachować kolejność z wejścia.

### Przykład

Wejście

```
6
Albert 5 3
Bartek 10 1
Cezary 3 2
Dominik 4 3
Eustachy 1 2
Franek 3 2
```

***
Wyjście

```
Albert Dominik Cezary Franek Eustachy
```

***Uwaga! Nie można używać bibliotek STL. Program ma być samodzielną implementacją sortowania w czasie liniowym.***
