#include <iostream>
using namespace std;



struct Kontakdaten
{
string Handynummer;
string Emailadresse;

};

struct Wohnungsdaten
{
string Zimmerzahl;
string Große;
int Kaltmiete;
int Warmmiete;
int Inklusivmiete;


};

struct Adresse
{
string Sraße;
string Psotleitzahl;
string Stadt;
string Land;

};

struct Mieter23
{
string Vollname;
int signed Alte;
string Nationalität;
string Stadt;
Adresse Adreese;
Wohnungsdaten Whonungsdaten;
Kontakdaten Kontakdaten;

};
int main()

{
Mieter23 Daten;


Daten.Vollname= "Meilsa Kleinmayer";
Daten.Alte= 32;
Daten.Nationalität= " USA";
Daten.Stadt = " Newyourk";

cout << "Vollname:" << Daten.Vollname << endl << "Alte:" << Daten.Alte << endl;
cout << "Nationalität" << Daten.Nationalität << endl << "Stadt" << Daten.Stadt << endl << endl; 

Daten.Adreese.Sraße= "Leidhold Straße 2";
Daten.Adreese.Psotleitzahl="03234";
Daten.Adreese.Stadt= "Leipzig";
Daten.Adreese.Land= "Deutschland";

cout << "Sraße:" << Daten.Adreese.Sraße << endl << "Postleitzahl:" << Daten.Adreese.Psotleitzahl << endl;
cout << "Stadt:" << Daten.Adreese.Stadt << endl << "Land:" << Daten.Adreese.Land  << endl << endl;


Daten.Whonungsdaten.Große= "67 QM";
Daten.Whonungsdaten.Zimmerzahl= "3 Zimmer + Küche + Bad";
Daten.Whonungsdaten.Kaltmiete=490;
Daten.Whonungsdaten.Warmmiete=730;
Daten.Whonungsdaten.Inklusivmiete= 120;

cout << "Große:" << Daten.Whonungsdaten.Große << endl << "Zimmerzahl:" << Daten.Whonungsdaten.Zimmerzahl << endl;
cout << "Kaltmiete:" << Daten.Whonungsdaten.Kaltmiete << endl << "Warmmiete:" << Daten.Whonungsdaten.Warmmiete << endl;
cout << "Inklusivmeite:" << Daten.Whonungsdaten.Inklusivmiete << endl << endl;

Daten.Kontakdaten.Handynummer="012392492323";
Daten.Kontakdaten.Emailadresse= "Melisakleinmayer.gmail.com";

cout << "Handynummer:" << Daten.Kontakdaten.Handynummer << endl;
cout << "Email:" << Daten.Kontakdaten.Emailadresse << endl;

return 0;
}