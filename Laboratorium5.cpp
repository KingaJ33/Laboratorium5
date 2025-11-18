// Laboratorium5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
using namespace std;


//ZAD.1
/*
int main() {

    int tab[10];
    int n;

    cout << "wprowadz 10 liczb calkowitych do tablicy: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        tab[i] = n;

    }
    for (int i = 9; i >= 0; i--) {
        cout << tab[i] << "  ";

    }

    return 0;
}

*/

//ZAD.2
/*
int main() {
    int n;

    cout << "podaj ile kolejnych liczb Fibonacciego chcesz wyznaczyc: ";
    cin >> n;

    if (n <= 0) {
        cout << "liczba musi byc dodatnia. koniec." << endl;
        return 1;
    }

    int* tab = new int[n];

   
    if (n >= 1) {
        tab[0] = 0;
    }
    if (n >= 2) {
        tab[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
    }

    cout << "ciag Fibonacciego: ";

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    delete[] tab;

    return 0;
}
*/

    //ZAD.3
/*
int main() {

    int tab[10];
    float suma = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {

        tab[i] = rand();
        suma += tab[i];

    }

    cout << "Wylosowane liczby: ";
    for (int i = 0; i < 10; i++) {

        cout << tab[i] << "  ";

    }
    cout << endl;

    float srednia = suma / 10;

    int licznik = 0;
    int min = tab[0];
    int max = tab[0];

    
    for (int i = 0; i < 10; i++) {
        
        if (tab[i] < srednia) {
            licznik++;
        }

        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    cout << "Srednia: " << srednia << endl;
    cout << "Mniejszych od sredniej: " << licznik << endl;
    cout << "Najmniejsza: " << min << endl;
    cout << "Najwieksza: " << max << endl;



    return 0;
}
*/
    //ZAD.4
/*
int main (){

int wiersze;
int kolumny;

cout << "Podaj liczbe wierszy: ";
cin >> wiersze;
cout << "Podaj liczbe kolumn: ";
cin >> kolumny;

if (wiersze <= 0 || kolumny <= 0) {
    cout << "Wymiary musza byc dodatnie." << endl;
    return 1;
}


int** tab = new int* [wiersze];

for (int i = 0; i < wiersze; i++) {
    tab[i] = new int[kolumny];
}

cout << "\nWprowadz wartosci dla poszczegolnych komorek:" << endl;
for (int i = 0; i < wiersze; i++) {
    for (int j = 0; j < kolumny; j++) {
        cout << "Element [" << i << "][" << j << "]: ";
        cin >> tab[i][j];
    }
}

cout << "\n--- Twoja Macierz ---" << endl;

for (int i = 0; i < wiersze; i++) {
    for (int j = 0; j < kolumny; j++) {
        cout << tab[i][j] << "\t";
    }
    cout << endl;
}

for (int i = 0; i < wiersze; i++) {
    delete[] tab[i];
}
delete[] tab;


return 0;
}
*/

//ZAD.5




// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
