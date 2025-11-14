// Laboratorium5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
using namespace std;


//ZAD.1

int main() {

    int tab[10];
    int n;

    cout << "wprowadz 10 liczb calkowitych do tablicy: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        tab[i] = n;

    }
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << "  ";

    }

    return 0;
}







//ZAD.2
/*

void ciag(int n);

int main() {
    int n;
    cout << "Podaj liczbe calkowita dodatnia: ";
    cin >> n;

   
    if (n > 0) {
        ciag(n);
    }
    else {
        cout << "Liczba musi byc calkowita dodatnia" << endl;
    }

    return 0;
}


void ciag(int n) {
    cout << "dzielniki liczby: " << endl;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

    //ZAD.3
    /*

        int tab[10];
        int suma = 0;

        srand(time(0)); 

        
        for (int i = 0; i < 10; i++) {
            tab[i] = rand() % 100;
            cout << tab[i] << " ";
            suma += tab[i];
        }

        double srednia = suma / 10.0;
        cout << "\nŚrednia: " << srednia << endl;

        
        int mniejsze = 0;
        for (int i = 0; i < 10; i++) {
            if (tab[i] < srednia) mniejsze++;
        }
        cout << "Liczb mniejszych od średniej: " << mniejsze << endl;

     
        int min = tab[0], max = tab[0];
        for (int i = 1; i < 10; i++) {
            if (tab[i] < min) min = tab[i];
            if (tab[i] > max) max = tab[i];
        }
        cout << "Najmniejsza: " << min << ", Największa: " << max << endl;

        */

    //ZAD.4






// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
