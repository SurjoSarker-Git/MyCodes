#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        int avg=(a+b+c)/3;
        
       
        if((a+b+c)%3==0&&b<=avg)
        {
            cout<<"YES"<<endl;
        }

        else
        cout<<"NO"<<endl;

        
    }
}