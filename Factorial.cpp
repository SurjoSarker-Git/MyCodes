#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0||n==1)
    return 1;

    else
    return n*fact(n-1);
}

int main()
{
    int num;
    cin>>num;

    cout<<fact(num);
}

/* return type void:-

    void fact(int n)
    {
        if(n==0||n==1)
        cout<< 1;
        else
        cout<< n*fact(n-1);
    }
*/