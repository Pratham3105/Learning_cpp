#include <iostream>
using namespace std;
void add()
{
	int a,b,c;
	cout << "enter first number" << endl;
	cin >> a ;
	cout << "enter the second number" << endl;
	cin >> b;
	c=a+b;
	cout << "addition is : " << c << endl;
	add();
}
int main ()
{
	add();
}
