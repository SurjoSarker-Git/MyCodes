#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,p,q,r,s;
        cin>>a>>b>>c>>d>>p>>q>>r>>s;
        int diff1= abs(a-c);
        int diff2= abs(b-d);
        
        cout<<max(diff1,diff2)*max(diff1,diff2)<<endl;
    }
}