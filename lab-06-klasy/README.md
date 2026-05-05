Laboratorium z programowania obiektowego
========================================

## Zadanie 6: klasy

Stos (ang. *stack*) to jedna z podstawowych liniowych struktur danych w informatyce.

Stos działa zgodnie z zasadą LIFO (ang. *Last-In, First-Out*).
Oznacza to, że ostatni element, który trafił na stos, jest pierwszym, który go opuszcza.
Najłatwiej wyobrazić sobie stos jako stos talerzy:
nowy talerz kładziesz na samą górę i tylko z góry możesz go zdjąć.
Jeśli chcesz wyciągnąć talerz ze spodu, musisz najpierw zdjąć
wszystkie te talerze, które leżą nad nim.

Cel tego zadania to opracowanie klasy `Stos`.

Proszę napisać:

1. Funkcję `main`, a w niej testy klasy `Stos`:
```cpp
Stos st;
st.push("Anna");
st.push("Barbara");
st.push("Celina");
cout << st.pop() << endl;
cout << st.pop() << endl;
cout << st.empty() << endl;
cout << st.pop() << endl;
cout << st.empty() << endl;
```

2. Klasę `Stos`, która zawiera:
+ konstruktor bez argumentów
+ metodę `void push(const string& s) // kładzie napis s na stosie`
+ metodę `string pop()  // zdejmuje element ze stosu i zwraca go`
+ metodę `bool empty()  // zwraca true jeśli stos jest pusty, false jeśli jest niepusty`
+ atrybut, który przechowuje napisy w stosie (polecam `vector`)

Proszę uruchomić program, aby sprawdzić, czy jego wyniki są poprawne.