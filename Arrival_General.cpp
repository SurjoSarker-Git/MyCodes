#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,i,max=0,min=100;
    int max_ind,min_ind;

    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]>max)
        {
            max=arr[i];
            max_ind=i;
        }

        if(arr[i]<=min)
        {
            min=arr[i];
            min_ind=i;
        }
    }
    
    int count=(i-min_ind)+(max_ind-1);

    if(max_ind>min_ind)
    {
        count--;
    }

    cout<<count<<endl;
	 	 	  	 	  			 		  	 	 				
    return 0;
}