#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Mieterdaten
{
string Vorname;
string Nachname;
int Alte;
string Nationalität;
 

};


struct Adresse
{
string Straße;
string Postleitzahl;
string Stadt;
string Land;
Mieterdaten Mieterdaten1;

};

void Readdaten(Adresse &Daten)
{
cout << "Bitte geben Sie ihren Vorname ein? " << endl;
cin >>Daten.Mieterdaten1.Vorname;
cout << "Bitte geben Sie ihren Nacname ein? " << endl;
cin >> Daten.Mieterdaten1.Nachname;
cout << "Bitte geben Sie ihre Alte ein? " << endl;
cin >> Daten.Mieterdaten1.Alte;
cout << "Bitte geben Sie ihre Augenfarbe ein? " << endl;
cout << "Bitte geben Sie ihre Nationalität ein? " << endl;
cin.ignore(1, '\n');
cin >> Daten.Mieterdaten1.Nationalität;
cout << "Bitte geben Sie ihr Straße ein? " << endl;
cin.ignore(1,'\n');
getline(cin,Daten.Straße);
cout << "Bitte geben Sie ihr Postleitzahl ein? " << endl;
cin.ignore(1,'\n');
getline(cin,Daten.Postleitzahl);
cout << "Bitte geben Sie ihre Stadt ein? " << endl;
cin >> Daten.Stadt;
cout << "Bitte geben Sie ihren Land ein? " << endl;
cin >> Daten.Land;

}

void Print(Adresse Datenprint)
{
cout << Datenprint.Mieterdaten1.Vorname << endl;
cout << Datenprint.Mieterdaten1.Nachname << endl;
cout << Datenprint.Mieterdaten1.Alte << endl;
cout << Datenprint.Mieterdaten1.Nationalität << endl;
cout << Datenprint.Straße << endl;
cout << Datenprint.Postleitzahl << endl;
cout << Datenprint.Stadt << endl;
cout << Datenprint.Land << endl;

}
int main()
{

Adresse Person1;
Readdaten(Person1);
Print(Person1);


return 0;
}