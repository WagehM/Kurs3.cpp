#include <iostream>
using namespace std;



struct UnternehmenManger
{
string Name;
int signed Age;
string Bereich;
string Aufgaben;
};

struct UnternehmenKontaktdaten
{
string Telefon;
string Email;
string Sprechpartner;
string WebseiteAdresse;


};

struct UnternehmenAdrees
{

string Street;
string Pobox;
string City;
string Country;

};

struct Unternehm
{
string Unternehmenstyp;
string Name;
int signed Gegrundetseit;
string Ceo;
string Grunder;
int Mitarbeiterzahl;
int long long Gewinn;
 string Produkt;
UnternehmenAdrees Adrees;
UnternehmenKontaktdaten KontaktDaten;
UnternehmenManger MangerDaten;

};
int main()

{

Unternehm Daten;

Daten.Unternehmenstyp=" Startup Tescnelogy ";
Daten.Name=" ChatGpt";
Daten.Gegrundetseit= 2013;
Daten.Grunder="Wageh Waldamnn";
Daten.Ceo= "Wageh Waldmann ";
Daten.Produkt= "ChatGpt";
Daten.Mitarbeiterzahl= 350;
Daten.Gewinn=300000000000000;

Daten.Adrees.Street="Elisabeth Strasse 19";
Daten.Adrees.Pobox= "04189";
Daten.Adrees.City= "Leipzig";
Daten.Adrees.Country="Deutschland";
Daten.KontaktDaten.Telefon="015749391872";
Daten.KontaktDaten.Email= "chatgpt.service@gmail.com";
Daten.KontaktDaten.Sprechpartner="Frau Mustermann";
Daten.KontaktDaten.WebseiteAdresse= "WWW.ChatGpt.Service.com";

Daten.MangerDaten.Name= "Sami Schoner";
Daten.MangerDaten.Age= 37;
Daten.MangerDaten.Bereich= "Marketing Manger Abteilung B12";
Daten.MangerDaten.Aufgaben= "Marketing Manger";


cout << "Unternehmens typ:" << Daten.Unternehmenstyp << endl << " Name:" << Daten.Name << endl  << " Gegrundet seit:" << Daten.Gegrundetseit << endl;
cout << "Grunder:" << Daten.Grunder << endl << "Ceo:" << Daten.Ceo << "Produkt:" << Daten.Produkt << endl;
cout << "Mitarbeiter Zahl:" << Daten.Mitarbeiterzahl << endl << "Gewinn:" << Daten.Gewinn << endl;
cout << "Street:" << Daten.Adrees.Street << endl << "Pobox:" << Daten.Adrees.Pobox << endl;
cout << "City:"  << Daten.Adrees.City << endl << "Country:" << Daten.Adrees.Country << endl;
cout << "TelefonNummer:" << Daten.KontaktDaten.Telefon << endl << "EmailAdreese:" << Daten.KontaktDaten.Email << endl;
cout << "Sprecpartner:" << Daten.KontaktDaten.Sprechpartner << endl << "WebseiteAdresse:" << Daten.KontaktDaten.WebseiteAdresse << endl; 
cout << "Mnagername;" << Daten.MangerDaten.Name << endl << "Age:" << Daten.MangerDaten.Age << endl;
cout << "Bereich:" << Daten.MangerDaten.Bereich << endl << "Aufgaben:" << Daten.MangerDaten.Aufgaben << endl;
return 0;
}