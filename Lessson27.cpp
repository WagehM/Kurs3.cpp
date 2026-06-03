#include <iostream>
using namespace std;

struct Kontakt
{

string Pohne;
string Email;

};

struct Adrees
{

string Street;
string Pobox;

};

struct Mitarbeiter
{

string Fullname;
int signed Age;
string City;
string Country;
int Monthlysalary;
int Yearlysalary;
char Geender;
bool Married;
Adrees Adrees;
Kontakt MitarbeiterKontakt;

};
int main()
{
Mitarbeiter Daten;

Daten.Fullname= "Daniel Waldmann";
Daten.Age=25;
Daten.City="Leipzig";
Daten.Country="Ukraine";
Daten.Monthlysalary=5000;
Daten.Yearlysalary=60000;
Daten.Geender='M';
Daten.Married=true;
Daten.Adrees.Street= " Gouthe strasse 17";
Daten.Adrees.Pobox= "04179 Leipzig";
Daten.MitarbeiterKontakt.Pohne= "015789782387";
Daten.MitarbeiterKontakt.Email= "danielwaldmann@gmail.com";

cout << "Name:" << Daten.Fullname << endl << "Age:" << Daten.Age << endl;
cout << "City:" << Daten.City << endl << "Country:" << Daten.Country << endl;
cout << "Monthlysalary:" << Daten.Monthlysalary << endl << "Yearlysalary:" << Daten.Yearlysalary << endl;
cout << "Geender:" << Daten.Geender << endl << "Married:" << Daten.Married << endl;
cout <<"Street:" << Daten.Adrees.Street << endl << "Pobox:" << Daten.Adrees.Pobox << endl; 
cout << "Phone;" << Daten.MitarbeiterKontakt.Pohne << endl << "Email:" << Daten.MitarbeiterKontakt.Email << endl;
return 0;
}