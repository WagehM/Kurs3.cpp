#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int x=200;

void Lesson34()
{

int x=200;

cout << x << endl;

}
int main()
{

int x=300;

::x += 23;
cout << ::x << endl;
Lesson34();
cout << x << endl;

}
