#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void Lessom37(string Pasword)
{
bool User1;
string User1pasword="Wageh1010";

User1= (Pasword == User1pasword);

cout << User1 << endl;

}
int main ()
{
string Pasword;

cout << " Please to enter Pasword? " << endl;
getline(cin ,Pasword);

Lessom37(Pasword);


}