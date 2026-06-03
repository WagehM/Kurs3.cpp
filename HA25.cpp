#include <iostream>
using namespace std;
int main ()

{
bool Result;

Result = !(5>6 || 7==7) && !(1||false);

cout << Result << endl;






return 0;
}