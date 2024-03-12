#include <iostream>
using namespace std;
int main()
{
	int a,b,c; int i;
	a=1;
	b=2;
	cout << a << endl << b << endl;
	for(i=0;i<=10;i++)
	{
		c=a+b;
		cout << c << endl;
		a=b;
		b=c;
	}
}
