#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;

        int sum=2,count=1;

        while(sum<n)
        {
            sum+=x;
            count++;
        }

        cout<<count<<endl;

    }
}