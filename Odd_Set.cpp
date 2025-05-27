#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,sum=0;
        cin>>n;

        int arr[n*2];

        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        int div=sum/n;

        if(sum%n==0&&div%n==1)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }



    }
}