#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main ()
{

string MyName;

cout << "Please to enter your Name?" << endl;
getline(cin ,MyName);

cout << MyName << endl << endl;
cout << "*************************************" << endl;

int S1 , S2;

cout << " Please to enter a Number? " << endl;
cin >> S1 ;

cout << "Please to enter a Number? " << endl;
cin >> S2;

string N1 = to_string(S1) + to_string(S2);
 
cout << N1 << endl;


return 0;
}