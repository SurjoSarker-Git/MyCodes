#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5],cal=0;
    string str;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cin>>str;
    
    for(char c:str)
    cal+=arr[c-'1'];

    

    cout<<cal;
   
}