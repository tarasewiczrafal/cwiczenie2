#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie ;
    string nazwisko ;
    int rok_urodzenia;
    int akualny_rok;

    cout << "Podaj imie ";
    cin>> imie;
    cout << "Podaj nazwisko ";
    cin >> nazwisko;
    cout << "podaj rok urodzenia ";
    cin >> rok_urodzenia;
    cout << "podaj dzisiejszy rok ";
    cin >>akualny_rok;
int wiek = akualny_rok - rok_urodzenia;
    cout << "Witam, nazywam sie "<<imie << " "<< nazwisko << " "<< "urodzilem sie w" << " " <<rok_urodzenia << " " << "roku" << " "<< "i mam"<< " "<< wiek << " "<< "lat" << endl;
    return 0;
}
