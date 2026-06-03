#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Stdata
{
string Vorname;
string Nachname;
signed int Alter;
string Handynummer;

};

void Readinfo(Stdata &Data)
{
cout << "Geben Sie bitte Ihren Vorname ein? " << endl;
cin >> Data.Vorname;
cout << "Geben Sie bitte Ihren Nachname ein? " << endl;
cin >> Data.Nachname;
cout << "Geben Sie bitte Ihr Alter ein? " << endl;
cin >> Data.Alter;
cout << "Geben Sie bitte Ihre Handynummer ein? " << endl;
cin.ignore(1, '\n');
getline(cin , Data.Handynummer);

}
void Printinfo(Stdata Data)
{

cout << "********************************************" << endl;
cout << "Vorname: " << Data.Vorname << endl;
cout << "Nachname: " << Data.Nachname << endl;
cout << "Alter: " << Data.Alter << endl;
cout << "Handynummer: " << Data.Handynummer << endl;
cout << "********************************************" << endl;
}

void Readpersonsdata(Stdata Person[2])
{

Readinfo(Person[0]);
Readinfo(Person[1]);


}

void Printspersonsdata(Stdata Person[2])
{

Printinfo(Person[0]);
Printinfo(Person[1]);


}

int main ()
{
Stdata Person[2];
Readpersonsdata(Person);
Printspersonsdata(Person);


return 0;
}