#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={3,4,1,5,2};
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin()+2,34);
     for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // v.clear(); // remove all the element
    v.push_back(1);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
     cout << endl;
    v.erase(v.end()-1);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.empty() << endl;
    cout << v[0] << endl;
    cout << v.front() << endl;
    cout << v[v.size()-1] << endl;
    cout << v.back() << endl;

    // copy value of one vector to another vector

    vector<int>a;
    a=v;
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;
    
}