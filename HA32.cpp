#include <iostream>
#include <string>
#include <cmath>
using namespace std;


struct stLogin
{
string Email;
string Pasword;
bool BoolEmail, BoolPasword;
    
void voLogindatenprint()

{

cout << " Please to enter your Emil? " << endl;
cin >> Email;
cout << " Please to enter your Pasword? " << endl;
cin >> Pasword;

}

void voResult()
{

BoolEmail=( Email==Email);
BoolPasword=(Pasword==Pasword);


}
void Printresult()

{

cout << " Your email is: " << BoolEmail << endl;
cout << " Your Pasword is: " << BoolPasword << endl;


}

};

struct stPersondate

{

string Name;
string Lastname;
int Age;
stLogin Login;

void voPersondate()

{

cout << " Please to enter your Name? " << endl;
cin >> Name;
cout << " Please to enter your Age? " << endl;
cin >> Age;
cout << " Please to enter your Lastname? " << endl;
cin >> Lastname;



}

void vopersondateprint()

{

cout << "Name: " << Name << endl;
cout << "Lastname: " << Lastname << endl;
cout << "Age: " << Age << endl;


}


};
int main()

{
stPersondate Person1;


Person1.Login.voLogindatenprint();
Person1.Login.voResult();
Person1.Login.Printresult();
Person1.voPersondate();
Person1.vopersondateprint();

}