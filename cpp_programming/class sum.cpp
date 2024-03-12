#include <iostream>
using namespace std;
class A
{
	private:
		int a,b;
	
	public:
		void sum()
		{
			cout << "enter the first number"<< endl;
			cin >> a;
			cout << "enter the second number : "<< endl;
			cin >> b;
			
			int c;
			c=a+b;
			cout << "sum of two number is" << c;
		}
};

int main()
{
	A obj;
	obj.sum();
}
