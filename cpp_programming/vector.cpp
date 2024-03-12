#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // create vector and declare
    vector<int>v;
    vector<int>v1(5,1);
    // view size and capacity
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v. capacity() << endl;;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity  of vector : " << v. capacity() << endl;
    cout << "size of vector1 : " << v1.size() << endl;   // 5
    cout << "capacity  of vector1 : " << v1. capacity() << endl; //5
    // update value 
    v[1]=5;
    v1.push_back(5);
    cout << "size of vector1 : " << v1.size() << endl; // 6
    cout << "capacity  of vector1 : " << v1. capacity() << endl; //10
    v1.pop_back(); // delete value from a vector
    cout << "size of vector1 : " << v1.size() << endl; // 5 
    cout << "capacity  of vector1 : " << v1. capacity() << endl; // 10
    v1.push_back(5);
    // print vector 
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    vector<int>v3={1,2,3,4,5};
    for(int i=0;i<v3.size();i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
}