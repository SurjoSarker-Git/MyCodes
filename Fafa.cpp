#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,count=0;
    cin>>n;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    cout<<count+1;
    return 0;
}