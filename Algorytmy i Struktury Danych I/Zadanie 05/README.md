# Algorytmy i Struktury Danych

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
