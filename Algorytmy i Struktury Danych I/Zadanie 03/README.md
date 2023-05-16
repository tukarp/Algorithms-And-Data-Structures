# Algorytmy i Struktury Danych

## Zadanie 3 - Fala

### Treść Zadania

Dzieci na Wyspie bardzo lubiły zagadywać pracowników Ady i Serweryna, wypytując o sposoby spędzania wolnego czasu w ich stronach. Ostatnio na przykład zapoznały się z kulturą kibiców piłkarskich (w ekipie znalazł się fan Motoru Lublin) i tym, że podczas meczy na trybunie robi się falę meksykańską. Fala wydała im się tak interesująca, że dzieci spróbowały ją odtworzyć, gdy stały w kółeczku. Pierwsza osoba unosiła ręce do góry, po niej kolejna i tak dalej. Ale przez brak piłkarskich emocji i stosunkowo małą liczbę uczestników po kilku okrążeniach fali znudziło im się to. Postanowiły zmienić trochę zasady i stworzyć grę bazującą na meksykańskiej fali.

Dzieci dobrały się w pary i stanęły w okręgu. Następnie osoba z pary stojąca z lewej strony zamieniała się miejscami z osobą z lewej strony z sąsiedniej pary (pomiędzy daną parą znajduje się prawa osoba z pary z lewej strony i lewa osoba z pary z prawej strony). Później jeden z graczy zaczynał falę unosząc ręce w górę, sąsiadująca osoba to powtarzała i tak dalej. Jeżeli któryś z uczestników pomylił się (podniósł ręce za wcześnie, za późno, nie w swojej kolejce lub zapomniał) - odpadał z gry (w grze mogła wciąż być druga osoba z pary). Gra wtedy toczy się dalej rozpoczynając od osoby, która jako ostatnia wykonała poprawny ruch, ale ze zmienionym kierunkiem.

Gracz, który właśnie podniósł ręce mógł zainicjować falę powracającą, to znaczy zmieniał kierunek gry przez wydanie komendy i ponowne podniesienie rąk. Zwyciężała ta para, która najdłużej utrzymywała się w grze. Para wygrywała też wtedy, gdy tylko jedna z osób pozostawała w grze.

Ta ulepszona wersja meksykańskiej fali tak bardzo się dzieciom spodobała, że te z nich, które odpadały wcześniej chciały czym prędzej wrócić do gry. Uczestnicy zgodzili się, że gra sama w sobie jest ważniejsza niż wygrana, więc czasami po pomyłce któregoś gracza pozwalano wracać do okręgu parom, które odpadały wcześniej. Powracająca para stawała w taki sposób, by pomiędzy nią znalazły się dwie osoby, obok których znajdował się właśnie odchodzący gracz.

Dla przykładu:
- Początkowe ustawienie 3 osób obok siebie: P1 P2 P3
- Po pomyłce osoby P2: P1 P3
- Po przyłączeniu nowej pary: Pn P1 P3 Pn

Grupa Ady i Serweryna obserwując poczynania dzieci postanowiła zasymulować ich rozgrywkę.

### Wejście:

Na wejściu podane są liczby naturalne ***n***, ***p***, ***k***, oznaczające liczbę par, numer pary rozpoczynającej rozgrywkę (pary numerowane są od ***0***, grę rozpoczyna osoba z prawej) oraz początkowy zwrot gry, gdzie ***0*** - zgodnie z ruchem wskazówek zegara, ***1*** - odwrotnie do ruchu wskazówek zegara. Zakładamy, że na starcie pary stoją numerami rosnąco właśnie zgodnie z ruchem wskazówek zegara.
W kolejnym wierszu znajduje się liczba naturalna ***m***, wyznaczająca liczbę operacji, w następnych ***m*** wierszach znajdą się deskrytptory operacji ***op***, parametr ***x*** i w szczególnym przypadku ***flaga*** (czyli w wierszu mogą znaleźć się dwie lub trzy liczby naturalne). Operacje są zdefiniowane następująco:

- ***0 x - wykonanie x ruchów*** w grze (jeden ruch to uniesienie rąk przez jedną osobę) i wyświetlenie aktualnego stanu gry poczynając od osoby w parze, na której po x ruchach zatrzymała się runda zgodnie z aktualnym zwrotem ruchu.
- ***1 x flaga - pomyłka osoby i ewentualny powrót wyeliminowanej pary***; odejście osoby, na której zatrzyma się runda po ***x*** ruchach; dla flagi: ***1*** - do rozgrywki wraca para, której najdłużej nie było w grze, ***0*** - nic się nie dzieje, o ile po odejściu gracza w kółku zostały więcej niż 3 osoby, w przeciwnym wypadku do rozgrywki wraca para, której najdłużej nie było w grze.
- ***2 x - zmiana kierunku ruchu***; po ***x*** ruchach ***x-ta*** w kolejności osoba wykonuje dodatkowy ruch oznaczający zmianę kierunku i kolejne uniesienia odliczane są w przeciwną stronę (dodatkowe uniesienie rąk liczone jest jako pierwszy ruch po zmianie kierunku).

***3 ≤ n ≤ 10000***

***k = {0, 1}***

***1 ≤ m ≤ 10000***

***op = {0, 1, 2}***

### Wyjście:

Na wyjściu program wypisuje efekty operacji wyświetlania aktualnego stanu gry.

### Przykład:

Wejście:

```
5 4 1
6
2 6
2 3
1 7 0
0 2
1 3 0
0 5
```

Wyjście:

```
4 1 0 2 1 3 2 4 0
2 3 1 2 1 4 0 4
```

***Uwaga! Zadanie ma być samodzielną implementacją list bez wykorzystania bibliotek STL.***
