# Algorytmy i Struktury Danych

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
