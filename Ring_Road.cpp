#include <bits/stdc++.h>
using namespace std;
int roads1[101],roads2[101];

int main() 
{
    
   
    int n,cnt=0,ans=0;
    cin>>n;
    while(n--) 
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (roads1[a]||roads2[b]) 
        {
            ans+=c;
            roads1[b]=roads2[a]=1;
        } 
        else 
        {
            roads1[a]=roads2[b]=1;
        }
        cnt+=c;
    }
    cout<<min(ans,cnt-ans);
    return 0;
}