# Algorithms-And-Data-Structures

## Spis Treści

- [Zadanie 1 - Wyremontujemy wasz dom!](#zadanie-1---wyremontujemy-wasz-dom)
- [Zadanie 2 - Szczyty](#zadanie-2---szczyty)
- [Zadanie 3 - Fala](#zadanie-3---fala)
- [Zadanie 4 - Faktury](#zadanie-4---faktury)
- [Zadanie 5 - Dostawca mleka](#zadanie-5---dostawca-mleka)
- [Zadanie 6 - Turniej](#zadanie-6---turniej)
- [Zadanie 7 - Premia lub hańba](#zadanie-7---premia-lub-hańba)
- [Zadanie 8 - Polowanie na kraby](#zadanie-8---polowanie-na-kraby)


## Zadanie 1 - Wyremontujemy wasz dom!

### Treść zadania

Gdzieś na Pacyfiku pośrodku kompletnie niczego znajduje się Wyspa. Zamieszkuje ją nieco prymitywne plemię Dotnetu. Mieszkańcy postanowili nauczyć się sądzić marchew. Ale ponieważ nie umieli, potrzebowali tutoriali z Internetu. Musieli też zamówić nasionka i nawozy ze sklepu w Europie. Ale zarówno Youtube, jak i zakupy w sieci były dla nich nieosiągalne. Nie mieli ani komputerów, ani smartfonów, ani połączenia ze światłowodem. Właściwie to nie mieli też prądu, a najbliższy sklep był 3000 km dalej. Postanowili więc się zmodernizować i przeprowadzić cyfryzację na całej Wyspie. Sołtys Wyspy sprowadził w tym celu ekipę IT, na której czele stanęli programiści Ada i Serweryn.

Ci po przybyciu zdecydowali, że rozpoczną od wyłonienia spośród członków poszczególnych wiosek łączników. Zlecaliby im pomniejsze zadania, które wymagałyby częstych kontaktów z nieznaną im jeszcze społecznością. Wybór miał paść na osobę najlepszą według wybranego przez nich kryterium. Poprosili zatem Sołtysa o listę wszystkich mieszkańców z poszczególnych wiosek z informacjami na ich temat. Każdy mieszkaniec miał być opisany przez:

- 1 - liczbę posiadanych umiejętności,
- 2 - wzrost w centymetrach,
- 3 - średnią szybkość wyrażoną w liczbie wykonanych czynności na godzinę.

Następnie opierając się o dane z list chcieli wybrać osobę najbardziej uzdolnioną (1 - ma najwięcej umiejętności) lub najwyższą (2 - z najwyższym wzrostem) lub najszybszą (3 - wykonuje najwięcej czynności w ciągu godziny). Zdarzałoby się czasem, że w danej wiosce jest kilka osób z najwyższą wartością wymaganego kryterium. W takiej sytuacji spośród nich wybiera się osobę według kolejnego wybranego kryterium. Jeśli wciąż jest więcej osób spełniających dwa kryteria, wybiera się spośród nich osobę według trzeciego kryterium. Przykładowo dla wybranej kolejności kryterium 2 3 1 najpierw szuka się osób najwyższych (2), następnie najszybszych (3), a na końcu najzdolniejszych (1).

### Wejście:

W pierwszej linii wejścia znajduje się liczba całkowita ***n***, oznaczająca liczbę wiosek. Dalej znajduje się ***n*** zestawów danych. Każdy zestaw składa się z liczby całkowitej ***m*** , oznaczającej liczbę mieszkańców wioski oraz trzech liczb 1, 2 i 3 oddzielonych spacjami w dowolnej kolejności. Decydują one o kolejności kryteriów, według których wybierani będą mieszkańcy wioski. W kolejnych ***m*** liniach są wiersze opisujące mieszkańców. Na opis mieszkańca składa się jednowyrazowy napis ***s*** , liczba naturalna ***u*** , liczba rzeczywista ***w*** i liczba naturalna ***c*** , które oznaczają odpowiednio imię mieszkańca, liczbę jego umiejętności, wzrost w centymetrach i średnia szybkość wyrażona w czynnościach na godzinę.

**1 ≤ n ≤ 10**

**1 ≤ m ≤ 2000000**

### Wyjście:

Na wyjściu dla każdej wioski program powinien wypisać imię tego mieszkańca, który spełnia założone kryteria. W przypadku dwóch osób z tymi samymi wartościami dla wszystkich kryteriów należy zachować kolejność wystąpienia na liście.

### Przykład:

Wejście:

```
3
5
2 3 1
Abidemi 3 160.5 12 
Bayo 3 172.4 12 
Chika 2 190.2 2 
Dalili 3 167.9 12 
Esi 1 190.2 3 
5
3 1 2
Abidemi 3 160.5 12 
Bayo 3 172.4 12 
Chika 2 190.2 3 
Dalili 3 167.9 12 
Esi 1 190.2 2 
5
1 2 3
Abidemi 3 167.9 12 
Bayo 3 167.9 12 
Chika 2 190.2 3 
Dalili 3 167.9 12 
Esi 1 190.2 2 
```

Wyjście:

```
Esi 
Bayo 
Abidemi
```

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

## Zadanie 5 - Dostawca mleka

### Treść Zadania

Dostawca mleka Kazimierz postanowił pójść z duchem czasu i wysłać swojego wiernego konia na emeryturę, zaś wóz przerobić na huśtawkę. By jednak nadal mógł dostarczać mleko potrzebował nowego środka transportu. Zgodził mu się pomóc znany na Wyspie szaman i wynalazca: Leonard. Panowie wspólnymi siłami zaprojektowali samochód dla Kazimierza, jednak nie byli w stanie ustalić potrzebnej wielkości pojemnika na mleko. Udali się po pomoc do Ady i Serweryna. Kazimierz nie odwiedzał wszystkich wiosek na wyspie, a jedynie pewien ich podzbiór. Informatycy zdecydowali więc, że ustalą liczbę wiosek mijanych przez Kazimierza po drodze do najdalszego z jego celów. Na tej podstawie Leonard będzie w stanie wyliczyć objętość pojemnika na mleko w samochodzie Kazimierza.

### Wejście:

W pierwszej linii wejścia znajduje się liczba naturalna ***n***, oznaczająca liczbę wszystkich wiosek. Kolejną linię stanowi liczba naturalna ***m***, która określa liczbę wiosek odwiedzanych przez Kazimierza.

Następnie pojawia się linia zawierająca nazwy wszystkich wiosek oddzielone spacjami. Nazwy mogą składać się z liter i cyfr. W następnej linii podane są listy sąsiadów wszystkich ***n*** wiosek, zakończone pojedynczymi literami "X". Kolejność list sąsiadów jest zgodna z kolejnością wprowadzania nazw wiosek, tzn. ***i***-ty ciąg zakończony literą "X" określa sąsiadów ***i***-tej wioski z ciągu nazw wiosek.

Dwie ostatnie linie wejścia to, kolejno, nazwa wioski początkowej oraz lista ***m*** nazw wiosek docelowych Kazimierza, oddzielonych spacjami. Do każdej z wiosek docelowych można dotrzeć z wioski startowej.

***1 ≤ n ≤ 30000***

***1 ≤ m ≤ 100***

### Wyjście:

Liczba wiosek odwiedzanych podczas podróży do najodleglejszej wioski docelowej.

### Przykład:

Wejście:

```
5
2
Antonin Bulgur Czychawa Drecja Euk
Bulgur Euk X Antonin Czychawa Drecja X Bulgur Drecja X Bulgur Czychawa Euk X Antonin Drecja X
Antonin
Bulgur Drecja
```

Wyjście:

```
2
```

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

## Zadanie 7 - Premia lub hańba

### Treść Zadania

Grupa programistów na Wyspie co chwilę musiała zdawać raporty z wydajności swoich teamów deweloperskich. Wielki Product Owner całego przedsięwzięcia cyfryzacji Wyspy, czyli Sołtys, każdego dnia prosił któryś z zespołów o informację ile historyjek udało się im ostatnio "dowieźć". Jego plan zakładał, że będzie sprawdzał wydajność ***n*** zespołów w ustalonej kolejności i na podstawie sumy wykonanych zadań ustali, czy pracownikom Ady i Serweryna należy się jakaś premia, czy raczej okrycie hańbą (najwyższy wymiar kary na Wyspie).

Programiści raczej woleli dostawać premię i odkryli, że jeśli tuż przed zdaniem raportu przez ***i-ty*** zespół dokonają jednej zmiany w kolejce raportowania, to Sołtys jakoś tego nie zauważa, nawet jeśli kilkakrotnie dodaje wynik tego samego zespołu. To znaczy, że przed każdym dodaniem do wyniku ***i-tego*** zespołu w kolejce można pozostawić kolejność bez zmian lub zamienić miejscami dwa dowolne zespoły sąsiadujące ze sobą. Programiści zauważyli, że w ten sposób mogą zmaksymalizować swoją końcową sumę i zwiększyć szansę na dostanie premii.

### Wejście:

W pierwszej linii wejścia znajduje się liczba naturalna ***n*** - liczba zespołów. W kolejnej linii znajduje się ***n*** liczb naturalnych ***a(i)***, które odpowiadają liczbie dowiezionych historyjek przez ***i-ty*** zespół.

***2 ≤ n ≤ 500***

***1 ≤ a(i) ≤ 10^6***

### Wyjście:

Na wyjściu należy wyświetlić maksymalny wynik, jaki mogą uzyskać zespoły programistów na koniec raportowania.

### Przykład:

Wejście:

```
5
3 1 5 4 10
```

Wyjście:

```
38
```

***Uwaga! Zadanie ma zostać rozwiązane przy użyciu programowania dynamicznego ze złożonością O(n3).***

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

