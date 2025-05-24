#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;

    vector<long long int> arr;
    arr.push_back(b);

    while (b>a) 
    {
        if (b%10 == 1) 
        {
            b/=10;
        } 
        else if (b%2==0) 
        {
            b/=2;
        } 
        else 
        {
            break;
        }
        arr.push_back(b);

    }

    if (b==a) 
    {
        cout<<"YES"<<endl;
        cout<<arr.size()<<endl;

        for (int i=arr.size()-1;i>=0;i--) 
        {
            cout<<arr[i];
            if (i>0)
            {
                cout<< " ";
            }
        }
        cout<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }

    return 0;
}