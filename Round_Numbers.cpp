#include<bits/stdc++.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;


int main()
{
    int t,count,prod;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n, arr[10];
        count=0,prod=1;
        cin>>n;

        while(n)
        {
            int rem=n%10;
            if(rem)
            {
                arr[count]=rem*prod;
                count++;
            }

            n/=10;
            prod*=10;
        }

        cout<<count<<endl;

        for(int i=0;i<count;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}