#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int Mysumfunktion()
{
 int A,X;
cout << "Please to enter a Number? " << endl;
cin >> A;
cout << " Please to enter a Number? " << endl;
cin >> X;

return A+X;
}

void Myprosiger()
{
int D,Y;

cout << "Please to enter a Numebr1?" << endl;
cin >>D;
cout << "Please to enter a Number2?" << endl;
cin >>Y;
cout << D + Y  << endl;

}

int main()

{
cout << Mysumfunktion() << endl;
Myprosiger();

return 0;
}