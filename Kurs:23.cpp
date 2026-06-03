#include <iostream>
using namespace std;
int main ()

{
int Hours,Numberperhours,Remainder,Numberofhours;


Numberperhours=24;

cout << " Please to emter Hours? " << endl;
cin >> Hours;


Numberofhours= floor (Hours / Numberperhours);
Remainder = ( Hours % Numberperhours );

cout << Numberofhours << ";" << Remainder << endl;



return 0;
}