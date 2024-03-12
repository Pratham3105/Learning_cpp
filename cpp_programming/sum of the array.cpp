#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout << "enter two number" << endl;
	cin >> m >> n ;
	
	
	int a[m],b[n];
	cout << "enter thr elements of the first array" << endl;
	for(int i=0;i<m;i++)
	{
		cin >> a[m];
	}
	
	cout << "enter thr elements of the second array" << endl;
	for(int i=0;i<n;i++)
	{
		cin >> a[n];
	}
	
	if(n<m)
	{
		int sum[m];
		for(int i=0;i<m;i++)
		{
			sum[i]=a[i]+b[i];

		}
		for(int i=0;i<m;i++)
		{
			cout <<  sum[i] << " ";
		}
	}
	else
		{
			int sum[n];
			for(int i=0;i<n;i++)
			{
			sum[i]=a[i]+b[i];

			}
			for(int i=0;i<n;i++)
			{
			cout << sum[i] << " ";
			}
		}
}
