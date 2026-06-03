#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
// round 
cout << " Round: " << round (2.4) << endl;
cout << round (2.5) << endl;
cout << round (2.9) << endl << endl;


// Sqrt
cout << "Sqrt: " << round (sqrt(33)) << endl << endl;

// floor
cout << " Floor: " << floor (2.9) << endl << endl;


// Ceil
cout << " Ceil: " << ceil (3.1) << endl;
cout << ceil (3.9) << endl << endl;



// Pow // Power 
int x=16;
cout << " Pow: " << pow(2,4) << endl;

x= pow (x,2);
cout << x << endl << endl;


//Abs
cout << abs (-20) << endl;
cout << abs(-33) << endl;

return 0;
}