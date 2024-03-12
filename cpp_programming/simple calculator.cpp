#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	cout << "enter the first number" << endl;
	cin >> a;
	cout << "enter the second number" << endl;
	cin >> b;
	cout<<"enter 1 for addition "<<endl;
	cout<<"enter 2 for substrction"<<endl;
	cout<<"enter 3 for multiplication"<<endl;
	cout<<"enter 4 for division"<<endl;
	cin>>n;
	switch(n)
	{
		case 1: cout << "addition is " << a+b;
			break;
			
		case 2: cout << "substraction is " << a-b;
			break;
			
		case 3: cout << "multipication is " << a*b;
			break;
			
		case 4: cout << "division is " << a/b;
			break;
			
		default: cout << "invalid choice";		
	}
}
