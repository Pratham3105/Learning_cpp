#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(8);
    v.push_back(5);
    v.push_back(7);
    v.push_back(34);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] <<" ";

    }
    cout << endl;

    // sort in incresing order
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    // sort in decresing oreder
    //  sort(v.begin(),v.end(),greater<int>());
    //  for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " ";
    // }
    //cout <<endl;
    // searching 
    cout << binary_search(v.begin(),v.end(),8);
    cout << endl;
    cout << binary_search(v.begin(),v.end(),7);
    cout << endl;
    cout << binary_search(v.begin(),v.end(),34);
    cout << endl;
    cout << binary_search(v.begin(),v.end(),1);
    cout << endl;
    cout << binary_search(v.begin(),v.end(),5);
    cout << endl;
    vector<int>v1;
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(4);
    v.swap(v1);
     for(int i=0;i<v.size();i++)
    {
        cout << v[i] <<" ";

    }
    cout << endl;
    cout << binary_search(v.begin(),v.end(),7);

	cout << endl;
    //cout << find(v.begin(),v.end(),5);
    
   





}
