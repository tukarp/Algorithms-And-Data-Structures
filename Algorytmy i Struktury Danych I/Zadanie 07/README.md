# Algorytmy i Struktury Danych

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
