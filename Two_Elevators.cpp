#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int m=abs(b-c)+c-1;

        if(a-1<m)
        {
            cout<<1<<endl;
        }

        else if(a-1>m)
        {
            cout<<2<<endl;
        }

        else if(a-1==m)
        {
            cout<<3<<endl;
        }
    }
}