#include <iostream>
#include <string>
#include <cmath>

using namespace std;


enum class Geschlecht{Männlich,Weblich};

struct Stmieterdaten
{
string Vorname;
string Nachname;
signed int Alter;
string Nationalotät;

};
struct Stmieteradresse
{
string Straße;
string Postleitzahl;
string Stadt;
string Land;
Stmieterdaten Mieterdaten;
Geschlecht Geschlecht;

};
void LieseMieterdaten(Stmieteradresse &Daten)
{
cout << "Bitte geben Sie Ihren Vorname ein? " << endl;
cin >> Daten.Mieterdaten.Vorname;
cout << "Bitte geben Sie Ihren Nachname ein? " << endl;
cin >> Daten.Mieterdaten.Nachname;
cout << "Bitte geben Sie Ihr Alter ein? " << endl;
cin.ignore(1, '\n');
cin >> Daten.Mieterdaten.Alter;
cout << "Bitte geben Sie Ihre Nationalität ein? " << endl;
cin.ignore(1, '\n');
getline(cin, Daten.Mieterdaten.Nationalotät);
cout << "Bitte geben Sie Ihre Straße ein? " << endl;
cin.ignore(1,'\n');
getline(cin, Daten.Straße);
cout << "Bitte geben Sie Ihre Postleitzahl ein? " << endl;
cin >> Daten.Postleitzahl;
cout << "Bitte geben Sie Ihre Stadt ein? " << endl;
cin >> Daten.Stadt;
cout << "Bitte geben Sie ihren Land ein? " << endl;
cin >> Daten.Land;

}
void Drückmieterdaten(Stmieteradresse Daten)
{
cout << "*************************************************" << endl;
cout << "Ihr Vorname: " << Daten.Mieterdaten.Vorname << endl;
cout << "Ihr Nachname: " << Daten.Mieterdaten.Nachname << endl;
cout << "Ihr Alter: " << Daten.Mieterdaten.Alter << endl;
cout << "Ihre Nationalität: " << Daten.Mieterdaten.Nationalotät << endl;
cout << "Ihre Straße: " << Daten.Straße << endl;
cout << "Ihre Postleitzahl: " << Daten.Postleitzahl << endl;
cout << "Ihre Stadt: " << Daten.Stadt << endl;
cout << "Ihr Land: " << Daten.Land << endl;
Geschlecht::Männlich;
cout << "*************************************************" << endl;
}

void Lmieterdatenadresse(Stmieteradresse Mieterdatenadresse[3])
{
LieseMieterdaten(Mieterdatenadresse[0]);
LieseMieterdaten(Mieterdatenadresse[1]);
LieseMieterdaten(Mieterdatenadresse[2]);

}

void Dmieterdatenadresse(Stmieteradresse Mieterdatenadresse[3])
{
Drückmieterdaten(Mieterdatenadresse[0]);
Drückmieterdaten(Mieterdatenadresse[1]);
Drückmieterdaten(Mieterdatenadresse[2]);

}

int main ()

{
Stmieteradresse Mieterdatenadresse[3];
Lmieterdatenadresse(Mieterdatenadresse);
Dmieterdatenadresse(Mieterdatenadresse);

return 0;
}