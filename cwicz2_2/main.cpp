#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie = "Rafal";
    string nazwisko = "Tarasewicz";
    int rok_urodzenia = 1996;
    int akualny_rok = 2017;
    int wiek = akualny_rok - rok_urodzenia;
    cout << "Witam, nazywam sie "<<imie << " "<< nazwisko << " "<< "urodzilem sie w" << " " <<rok_urodzenia << " " << "i mam"<< " "<< wiek << " "<< "lat" << endl;
    return 0;
}
