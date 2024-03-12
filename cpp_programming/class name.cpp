#include <iostream>
using namespace std;
class pratham
{
	public:
		void name()
		{
			cout << "my name is pratham tamrakar" << endl;
		}
	
};
class raj 
{
	public:
		void name2()
		{
			cout << "my name is raj jaiswal" << endl;
		}
	
};
int main ()
{
	char ch;
	
		int a ;
	cout << "enter any number out of 0 and 1" << endl;
	cin >> a;
	
	pratham obj1;
	obj1.name();
	raj obj2;
	if(a==1)
	{
		obj2.name2();
	}
	
	
	
	return 0;	
}
