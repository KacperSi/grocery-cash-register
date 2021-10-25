# grocery-cash-register
Cash register program in a grocery store

Krótka instrukcja obsługi:

Uruchamianie:
1)Pobierz grocery-cash-register.AppImage oraz database.txt
2)Umieść pliki w jednym katalogu
3)Uruchom grocery-cash-register.AppImage

Obsługa:
1)Kasa może zostać zamknięta, jeżeli nie jest otwarty rachunek. Aby to zrobić wpisz "exit" gdy pojawi się komunikat: 
"Aby otworzyć nowy rachunek wpisz dowolny znak i wciśnij enter. Aby zamknąć kasę wpisz exit:"
2)Aby otworzyć rachunek wprowadź dowolny znak i kliknij enter.
3)Po otworzeniu rachunku możliwe jest dodawanie do niego produktów przez podanie kodu kreskowego i zakupionej ilości.
Kody kreskowe produktów:
145325-marchew
322144-pomidor
643532-ziemniak
243234-arbuz
984783-kiwi
349834-gruszka
4)Po dodaniu produktu zostanie wyświetlona lista zakupionych produktów wraz z ceną.
5)Każdorazowo po dodaniu produktu możemy zamknąć rachunek wpisując x.
6)Po zamknięciu rachunku wyświetlana jest lista zakupionych produktów, ich ceny oraz całościowy koszt zakupionych produktów.
7)Program wraca do punktu 1.


Informacja dla dewelopera:
Planowaną rozbudowę systemu o wagę zrealizować można dodając klasę dziedziczącą po klasie orderedProduct nadpisując metodę setAmount().
Jako przykład takiej klasy zaproponowałem productByWeight. Metoda setAmount() tej klasy wypisuje "Podaj ilosc[kg] : " ,
zamiast "Podaj ilosc[szt] : ". Można jej implementacje z powodzeniem podmienić na odczyt z wagi elektronicznej.
