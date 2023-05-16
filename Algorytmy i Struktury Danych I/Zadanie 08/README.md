# Algorytmy i Struktury Danych

## Zadanie 8 - Polowanie na kraby

### Treść Zadania

Część linii brzegowej Wyspy jest domem dla licznej populacji krabów. Przez większość czasu zwierzęta te są pod ścisłą ochroną, jednak raz w roku myśliwi z okolicznych wiosek urządzają wielkie polowanie. Przed rozpoczęciem, Wielki Łowczy wyznacza kwadratowy obszar polowania, który dzieli na pewną liczbę identycznych działek tak, aby wzdłuż długości boku kwadratu mieściło się tyle działek, ile grup bierze udział w wydarzeniu.

Obszar polowania zorientowany jest względem róży kierunków, tzn. przeciwległe ściany wyznaczają kierunki N-S lub E-W. Myśliwi z każdej wioski rozbijają na jednej z działek swój obóz, z którego wyruszają na poszukiwania zdobyczy - zgodnie z tradycją - wyłącznie w 8 kierunków świata (N, E, S, W, NE, SE, SW, NW).
Na takiej "drodze polowania" nie może znaleźć się żaden obóz konkurencyjnych myśliwych: Wyspiarzom zdarzało się mylić kraby z kończynami śpiących towarzyszy.
Ponadto miejsca na plaży różnią się od siebie. Niektóre potrzebują utwardzenia przed założeniem obozu, inne muszą zostać wyposażone w zapory anty-waleniowe (od roku obowiązuje nowy regulamin Bezpieczeństwa i Higieny Polowania), a jeszcze inne po prostu przynoszą mało zdobyczy.
W tegorocznej edycji najmniej kosztowne rozmieszczenie obozów poławiaczy mieli zapewnić Ada i Serweryn, którym w zamian obiecano odstąpić kilkanaście sztuk do budowy krab-komputera.

### Wejście:

W pierwszej linii wejścia znajduje się liczba ***n***, będąca liczbą obozów, które trzeba rozmieścić na kwadratowym obszarze polowania o boku długości ***n*** działek. Kolejne ***n*** linii stanowią ciągi ***n*** liczb całkowitych nieujemnych ***a(i,j)***, gdzie każda liczba ***a(i,j)*** odpowiada kosztowi budowy obozu na polu o koordynatach ***i***, ***j***.

***4 ≤ n ≤ 30***

***0 ≤ a(i,j) ≤ 100***

### Wyjście:

Ciąg ***n*** liczb, stanowiących numery kolumn, w których umieścimy obozy w kolejnych wierszach w najmniej kosztownym, poprawnym rozmieszczeniu. Wyświetlona odpowiedź musi być najmniejszym rozwiązaniem według porządku leksykograficznego.

### Przykład:

Wejście:

```
5
1 5 10 1 3
3 10 10 10 5
10 1 1 5 5
1 1 1 1 1
15 15 10 15 15
```

Wyjście:

```
3 0 2 4 1
```
