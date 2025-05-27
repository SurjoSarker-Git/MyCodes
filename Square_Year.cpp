#include<bits/stdc++.h>
using namespace std;

bool square (int num)
{
    if(num<0)
    return false;
    
    int root =(int)sqrt(num);
    return root*root==num;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int num;
        cin>>num;

        if(square(num))
        {
            int sqrroot=sqrt(num);

            if(sqrroot%2==0)
            {
                cout<<sqrroot/2<<" "<<sqrroot/2<<endl;
            }
            else
            cout<<sqrroot/2<<" "<<(sqrroot/2)+1<<endl;
        }

        if(!square(num))
        {
            cout<<"-1"<<endl;
        }
    }
}