#include <iostream>
using namespace std;
int main()
{
	int a =2;
	int *ptr;
	ptr = &a;
	cout << ptr;
	cout << endl;
	*ptr=3;
	cout << ptr <<  endl;
	cout << a;
}
