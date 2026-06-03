#include <iostream>
using namespace std;
int main ()

{

int B, A=10;
int C=20;

B=A++;

cout << "B: " << B << endl;
cout << "A: " << A << endl;

B=++A;

cout << "B:" << B << endl;
cout << "A: " << A << endl;

C++;
++C;

cout << C << endl;


--C;

cout << C << endl;






return 0;
}