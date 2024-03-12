#include <iostream>
using namespace std;
class A
{
	int length;
	int width;
	
	public:
		
		A(int length,int width)
		{
			this->length=length;
			this->width=width;
		}
		
		void display()
		{
			cout << "Area is equal to : " << length*width;
		}
		
		
		
};
int main()
{
	A obj(10,2);
	obj.display();
}
