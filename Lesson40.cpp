#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void Readgrade(double Grade[3])
{
cout << "Please to enter Grade1? " << endl;
cin >> Grade[0];
cout << "Please to enter Grade2? " << endl;
cin >> Grade[1];
cout << "Please to enter Grade3? " << endl;
cin >> Grade[2];

}

double Remainder(double Grade[3])
{

double Avrage;

Avrage= (Grade[0] + Grade[1] + Grade[2] )/3;
return Avrage;

}
void PrintGrades(double Grade[3])
{


cout <<"*****************************************" << endl;
cout << "The avrage of grades is " << Remainder(Grade) << endl;

}
int main ()

{
double Grade[3];
Readgrade(Grade);
PrintGrades(Grade);
// Test the code

return 0;
}