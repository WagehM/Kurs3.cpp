#include <iostream>
#include <cmath>
using namespace std;

enum enFarbe { Rot ,Blau,Gelb};
enum enGeschlcht {Männlich,Weblich};
enum enBeziehung {Leidg, Verheiratet};


struct stAdresse
{
string Straße;
string Postleitzahl;
string Stadt;
string Land;

};
struct stKontaktdaten

{
string Handynummer;
string Email;
string Telefonnumer;
stAdresse Adresse;

};
struct stAufgaben
{
string Aufgaben;
string Bereich;
stKontaktdaten Kontaktdaten;
enFarbe Lieblingsfarbe;
enGeschlcht Geschlecht;
enBeziehung Beziehung;

};
int main ()

{
stAufgaben Person1;


Person1.Kontaktdaten.Handynummer="132498119ß21";
Person1.Kontaktdaten.Telefonnumer="23482384ß23";
Person1.Kontaktdaten.Email="Maxajl.gmail.com";
Person1.Kontaktdaten.Adresse.Straße="Leidholl straße 2";
Person1.Kontaktdaten.Adresse.Stadt="Leipzig";
Person1.Kontaktdaten.Adresse.Postleitzahl="34211";
Person1.Kontaktdaten.Adresse.Land="Deutschland";
Person1.Aufgaben="Marketingmanger";
Person1.Bereich="Marketing";
Person1.Beziehung = enBeziehung::Leidg;
Person1.Geschlecht = enGeschlcht::Männlich;
Person1.Lieblingsfarbe =enFarbe::Blau;



cout <<"Hnadynummer:" << Person1.Kontaktdaten.Handynummer << endl << "Telefonnummer:" << Person1.Kontaktdaten.Telefonnumer << endl;
cout << "Email:" << Person1.Kontaktdaten.Email << endl << "Straße:" << Person1.Kontaktdaten.Adresse.Straße << endl;
cout << "Stadt:" << Person1.Kontaktdaten.Adresse.Stadt << endl << "Postleitzahl:" << Person1.Kontaktdaten.Adresse.Postleitzahl << endl;
cout << "Land:" << Person1.Kontaktdaten.Adresse.Land << endl << "Aufgaben:" << Person1.Aufgaben << endl;
cout << "Bereich:" << Person1.Bereich << endl << "Lieblingfarbe:" << Person1.Geschlecht << endl;
cout << "Geschlect:" << Person1.Beziehung<< endl << "Lieblingfarbe:" << Person1.Lieblingsfarbe << endl;


return 0;
}