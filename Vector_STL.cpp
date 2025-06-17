#include<bits/stdc++.h>
using namespace std;


int main()
{
   /*
   
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
   
   
   
   */
    
   vector<int>v(9);
   
   for(int i=0;i<v.size();i++)
   {
        int x;
        cin>>x;

        v.push_back(x);
        cout<<v[i]<<" ";
   }
  




}