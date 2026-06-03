#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
double Grades[3];
double Avrage;

cout << "Please to enter Grade1? " << endl;
cin >> Grades[0];
cout << "Please to enter Grade2? " << endl;
cin >> Grades[1];
cout << "Please to enter Grade3? " << endl;
cin >> Grades[2];

Avrage= (Grades[0] + Grades[1] + Grades[2])/3;
cout << "***********************************" << endl;
cout << "The avrage of grades is " << Avrage << endl;

}