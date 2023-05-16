# Algorytmy i Struktury Danych

## Zadanie 2 - Szczyty

### Treść Zadania

Ada i Serweryn w ramach dalszego modernizowania Wyspy chcieli zbudować wieże transmisyjne i idealnie nadawały się do tego najwyższe szczyty w okolicy. Najoszczędniejszy sposób rozmieszczenia wież polegał na tym, by prace rozpocząć na najniższym wybranym szczycie, stopniowo przenosząc się coraz wyżej, aż do najwyższego szczytu.

Wyspa była bardzo górzystym terenem. Wszystkie szczyty tam miały swoją nazwę. Członkowie plemienia mieli szczególny szacunek do szczytów, których wysokość nad poziomem morza była potęgą dwójki. Ada i Serweryn postanowili uszanować ich upodobanie i szczyty o takich wysokościach obsłużyć w pierwszej kolejności.

### Wejście:

W pierwszej linii wejścia znajduje się liczba całkowita ***t***, oznaczająca liczbę testów. Dalej znajduje się ***t*** zestawów danych. Każdy zestaw składa się z liczby całkowitej ***n***, oznaczającej liczbę szczytów. W kolejnych ***n*** liniach są wiersze opisujące szczyty. Opis składa się z jednowyrazowego napisu ***s*** - nazwy szczytu oraz liczby dodatniej całkowitej ***w*** - wysokości tego szczytu w metrach nad poziomem morza.

***1 ≤ t ≤ 10***

***1 ≤ n ≤ 50000***

***1 ≤ w < 2^32***

### Wyjście:

Na wyjściu dla każdego zestawu danych program powinien wypisać uporządkowaną listę szczytów w kolejności stawiania wież. Każdy szczyt ma zostać wyświetlony w formacie s-w. W przypadku szczytów z tymi samymi wartościami należy zachować kolejność wystąpienia na liście.

### Przykład:

Wejście:

```
3
5
Indrys 3
Fossa 67
Dingo 64
Werweta 10
Kwezal 1
3
Indrys 3
Fossa 2
Dingo 4
1
Indrys 10
```

Wyjście:

```
Kwezal-1 Dingo-64 Indrys-3 Werweta-10 Fossa-67
Fossa-2 Dingo-4 Indrys-3
Indrys-10 
```

***Uwaga! Nie można używać bibliotek STL. Program ma być samodzielną implementacją algorytmu sortującego.***
