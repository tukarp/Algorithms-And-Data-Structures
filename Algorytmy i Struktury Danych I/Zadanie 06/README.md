# Algorytmy i Struktury Danych

## Zadanie 6 - Turniej

### Treść Zadania

Plemię Dotnetu nie zawsze było pokojowo nastawione. Wojownicy z poszczególnych wiosek nieraz toczyli ze sobą krwawe boje. Zwyczaje te zanikły wraz z coraz większym ucywilizowaniem społeczności. Jednak nostalgia za starymi czasami sprawiła, że mieszkańcy Wyspy co jakiś czas organizowali walki pomiędzy sobą. Dla obserwujących to pracowników Ady i Serweryna wyglądało to jak łagodny turniej w Mortal Kombat.

Na polu bitwy w losowych miejscach ustawiali się żądni wrażeń uczestnicy z przypisanymi od 0 do n-1 numerami. Następnie toczyli określoną liczbę pojedynków. W jednym momencie odbywa się tylko jedna walka. W pierwszej kolejności w walce biorą udział dwie osoby, które stoją najbliżej siebie. Zwycięża ta z nich, która ma większą siłę. Zwyciężony wojownik znika z pola bitwy. Zwycięzca nie zmienia swojego początkowego położenia na polu bitwy.

Zakłada się, że w przypadku remisu zwycięża ten wojownik, którego numer jest mniejszy. Jeśli w tej samej odległości znajduje się więcej par wojowników, w pierwszej kolejności rozstrzygana jest walka wojownika o najniższym numerze. Jeśli wojownik ten z racji tej samej odległości może walczyć z kilkoma żołnierzami, to walkę zaczyna z tym o najniższym numerze.

Walki trwają dopóki nie polegnie określona liczba uczestników. Na podstawie rozmieszczenia uczestników oceń kolejność opuszczania pola bitwy.

### Wejście:

Na wejściu program w pierwszej linii otrzyma liczbę dodatnią ***n*** i ***t***, oznaczające liczbę wojowników na polu bitwy oraz liczbę oczekiwanych walk, a w kolejnych ***n*** liniach znajdą się 3 liczby naturalne ***x***, ***y*** oraz ***w***, opisującego kolejnych wojowników, gdzie ***x*** i ***y*** to współrzędne wojownika na polu bitwy, a ***w*** to jego moc.

***2 ≤ n ≤ 10000***

### Wyjście:

Na wyjściu program ma wypisać współrzędne poległych w bitwie wojowników w kolejności ich "umierania".

### Przykład:

Wejście:

```
4 2
1 2 4
3 7 3
2 4 1
5 1 6
```

Wyjście:

```
2 4
1 2
```

***Uwaga! Program ma w swoim rozwiązaniu używać metody "dziel i zwyciężaj" zaimplementowanej ze złożonością O(nlogn).***
