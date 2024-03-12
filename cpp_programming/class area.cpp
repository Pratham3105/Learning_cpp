#include <iostream>
using namespace std;
class A
{
	private:
		int r;
	
	public:
		void get_data()
		{
			cout << "enter the radius of the circle " << endl;
			cin >> r;
		}
		
		void get_area()
		{
			cout << "area of the circle is : " << 3.14*r*r;
		}
		
		
};
int main()
{
	A obj;
	obj.get_data();
	obj.get_area();
}
